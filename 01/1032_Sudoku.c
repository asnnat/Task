#include<stdio.h>

struct sdk
{
    int x, y;
}notYet[81];
int a[10][10][10];
int count = 0; // can change >> check all of 0
int ccount = 0; // can not change >> run notYet array
int i, j, k, l;

void scana()
{
    for(i = 1; i < 10; i++)
    {
        for(j = 1; j < 10; j++)
        {
            scanf(" %d", &a[i][j][0]);
            if(a[i][j][0] == 0)
            {
                notYet[count].x = j;
                notYet[count].y = i;
                count++;
                for(k = 1; k < 10; k++)
                {
                    a[i][j][k] = 0;
                }
            }
        }
    }
    ccount = count;
}

void answera()
{
    for(i = 0; i < ccount; i++)
    {
        int y = notYet[i].y;
        int x = notYet[i].x;
        if(a[y][x][0] == 0)
        {
            for(k = 1; k < 10; k++) // Check horizontal
            {
                if(a[y][k][0] != 0)
                {
                    a[y][x][a[y][k][0]]++;
                }
            }
            for(k = 1; k < 10; k++) // Check vertical
            {
                if(a[k][x][0] != 0)
                {
                    a[y][x][a[k][x][0]]++;
                }
            }
            int p, q;
            if(y < 4)
            {
                p = 1;
            }
            else if(y < 7)
            {
                p = 4;
            }
            else
            {
                p = 7;
            }
            if(x < 4)
            {
                q = 1;
            }
            else if(x < 7)
            {
                q = 4;
            }
            else
            {
                q = 7;
            }
            for(k = 0; k < 3; k++)
            {
                for(l = 0; l < 3; l++)
                {
                    if(a[p+k][q+l][0] != 0)
                    {
                        a[y][x][a[p+k][q+l][0]]++;
                    }
                }
            }
            int check = 0;
            int ans;
            for(k = 1; k < 10; k++)
            {
                if(a[y][x][k] == 0)
                {
                    ans = k;
                }
                else
                {
                    check++;
                }
            }
            if(check == 8)
            {
                a[y][x][0] = ans;
                count--;
                if(count == 0)
                {
                    return ;
                }
            }
        }
    }
    /*
    for(i = 1; i < 10; i++)
    {
        for(j = 1; j < 10; j++)
        {
            if(a[i][j][0] == 0)
            {
                for(k = 1; k < 10; k++) // Check horizontal
                {
                    if(a[i][k][0] != 0)
                    {
                        a[i][j][a[i][k][0]]++;
                    }
                }
                for(k = 1; k < 10; k++) // Check vertical
                {
                    if(a[k][j][0] != 0)
                    {
                        a[i][j][a[k][j][0]]++;
                    }
                }
                int p, q;
                if(i >= 1 && i <= 3)
                {
                    p = 1;
                }
                else if(i >= 4 && i <= 6)
                {
                    p = 4;
                }
                else
                {
                    p = 7;
                }
                if(j >= 1 && j <= 3)
                {
                    q = 1;
                }
                else if(j >= 4 && j <= 6)
                {
                    q = 4;
                }
                else
                {
                    q = 7;
                }
                for(k = 0; k < 3; k++)
                {
                    for(l = 0; l < 3; l++)
                    {
                        if(a[p+k][q+l][0] != 0)
                        {
                            a[i][j][a[p+k][q+l][0]]++;
                        }
                    }
                }
                int check = 0;
                int ans;
                for(k = 1; k < 10; k++)
                {
                    if(a[i][j][k] == 0)
                    {
                        ans = k;
                    }
                    else
                    {
                        check++;
                    }
                }
                if(check == 8)
                {
                    a[i][j][0] = ans;
                    count--;
                    if(count == 0)
                    {
                        return ;
                    }
                }
            }
        }
    }
    */
}

void scanAndCheckb(int answer)
{
    int temp = 0;
    for(i = 1; i < 10; i++)
    {
        for(j = 1; j < 10; j++)
        {
            int x;
            scanf(" %d", &x);
            if(x != a[i][j][0])
            {
                temp++;
            }
        }
    }
    if(temp == 0)
    {
        printf("%d\n", answer+1);
    }
}

void printa()
{
    for(i = 1; i < 10; i++)
    {
        for(j = 1; j < 10; j++)
        {
            printf("%d ", a[i][j][0]);
        }
        printf("\n");
    }
}

main()
{
    int N;
    scanf("%d", &N);
    scana();
    while(count != 0)
    {
        answera();
    }
    //printa();
    for(k = 0; k < N; k++)
    {
        scanAndCheckb(k);
    }
    printf("END");
}
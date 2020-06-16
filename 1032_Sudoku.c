#include<stdio.h>

int a[10][10];
int b[10][10];
int y[10];
int count = 0;
int i, j, k, l, m, n;

void scana()
{
    for(i = 1; i < 10; i++)
    {
        y[i] = 0;
        for(j = 1; j < 10; j++)
        {
            scanf(" %d", &a[i][j]);
            if(a[i][j] == 0)
            {
                y[i]++;
                count++;
            }
        }
    }
}

void answera()
{
    for(i = 1; i < 10; i++)
    {
        for(j = 1; j < 10 && y[i] > 0; j++)
        {
            if(a[i][j] == 0)
            {
                int temp[10];
                for(k = 1; k < 10; k++)
                {
                    temp[k] = 0;
                }
                for(k = 1; k < 10; k++) // Check horizontal
                {
                    if(a[i][k] != 0)
                    {
                        temp[a[i][k]]++;
                    }
                }
                for(k = 1; k < 10; k++) // Check vertical
                {
                    if(a[k][j] != 0)
                    {
                        temp[a[k][j]]++;
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
                        if(a[p+k][q+l] != 0)
                        {
                            temp[a[p+k][q+l]]++;
                        }
                    }
                }
                int check = 0;
                int ans;
                for(k = 1; k < 10; k++)
                {
                    if(temp[k] == 0)
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
                    a[i][j] = ans;
                    count--;
                    y[i]--;
                    if(count == 0)
                    {
                        return ;
                    }
                }
            }
        }
    }
}

int scanAndCheckb()
{
    int sum = 0;
    for(i = 1; i < 10; i++)
    {
        for(j = 1; j < 10; j++)
        {
            scanf(" %d", &b[i][j]);
            if(a[i][j] != b[i][j])
            {
                sum++;
            }
        }
    }
    return sum;
}
/*
void printa()
{
    for(i = 1; i < 10; i++)
    {
        for(j = 1; j < 10; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
*/
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
    for(k = 1; k <= N; k++)
    {
        int x = scanAndCheckb();
        if(x == 0)
        {
            printf("%d\n", k);
        }
    }
    printf("END");
}
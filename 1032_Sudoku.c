#include<stdio.h>

int i, j, k;
struct Sudoku
{
    int MayBe[10];
    int SumMayBe;
    int ans;
}a[10][10];
int allans = 0;

void CheckX(int y, int x)
{
    if(a[y][x].ans != 0)
    {
        return ;
    }
    a[y][x].SumMayBe = 9;
    for(i = 1; i < 10; i++)
    {
        if(a[y][i].ans != 0)
        {
            a[y][x].MayBe[a[y][i].ans] = 0;
            a[y][x].SumMayBe--;
        }
    }
    if(a[y][x].SumMayBe == 1)
    {
        for(i = 1; i < 10; i++)
        {
            if(a[y][x].MayBe[i] == 1)
            {
                a[y][x].ans = i;
                allans++;
                return ;
            }
        }
    }
}

void CheckY(int y, int x)
{
    if(a[y][x].ans != 0)
    {
        return ;
    }
    a[y][x].SumMayBe = 9;
    for(i = 1; i < 10; i++)
    {
        if(a[i][x].ans != 0)
        {
            a[y][x].MayBe[a[i][x].ans] = 0;
            a[y][x].SumMayBe--;
        }
    }
    if(a[y][x].SumMayBe == 1)
    {
        for(i = 1; i < 10; i++)
        {
            if(a[y][x].MayBe[i] == 1)
            {
                a[y][x].ans = i;
                allans++;
                return ;
            }
        }
    }
}

void CheckZ(int y, int x)
{
    if((y+1)%3 != 0 && (x+1)%3 != 0)
    {
        return ;
    }
    a[y][x].SumMayBe = 9;
    for(i = y-1; i <= y+1; i++)
    {
        for(j = x-1; j <= x+1; j++)
        {
            if(a[i][j].ans != 0)
            {
                a[y][x].MayBe[a[i][j].ans] = 0;
                a[y][x].SumMayBe--;
            }
        }
    }
    if(a[y][x].SumMayBe == 1)
    {
        for(i = 1; i < 10; i++)
        {
            if(a[y][x].MayBe[i] == 1)
            {
                a[y][x].ans = i;
                allans++;
                return ;
            }
        }
    }
}

main()
{
    int n;
    scanf("%d",&n);
    for(i = 1; i < 10; i++)
    {
        for(j = 1; j < 10; j++)
        {
            scanf("%d",&a[i][j].ans);
            if(a[i][j].ans == 0)
            {
                for(k = 1; k < 10; k++)
                {
                    a[i][j].MayBe[k] = 1;
                }
            }
            else
            {
                allans++;
            }
        }
    }
    while(allans != 81)
    {
        for(i = 1; i < 10; i++)
        {
            for(j = 1; j < 10; j++)
            {
                CheckX(i, j);
                CheckY(i, j);
                CheckZ(i, j);
            }
        }
        for(i = 1; i < 10; i++)
        {
            for(j = 1; j < 10; j++)
            {
                printf("%d ", a[i][j].ans);
            }
            printf("\n");
        }
    }
    for(i = 1; i < 10; i++)
    {
        for(j = 1; j < 10; j++)
        {
            printf("%d ",a[i][j].ans);
        }
        printf("\n");
    }
}
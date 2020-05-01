#include<stdio.h>

int k, n, m;
int a[10001][10001];
int i, j;
int max = 1;

void find(int start,int power)
{
    if(power <= 0)
    {
        return ;
    }
    for(i = 1; i <= n; i++)
    {
        if(a[start][i] == 1 && start != i)
        {
            if(max < i)
            {
                max = i;
            }
            //printf("%d %d %d\n", start, i, power);
            find(i, power-1);
        }
    }
}

main()
{
    scanf("%d%d%d", &k, &n, &m);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            a[i][j] = 0;
        }
    }
    for(i = 0; i < m; i++)
    {
        int s, f;
        scanf("%d %d", &s, &f);
        a[s][f] = 1;
    }
    /*
    for(i = 1; i <= n; i++)
    {
        printf("%d ",i);
        for(j = 1; j <= n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    */
    find(1, k);
    printf("%d", max);
}

//Test case

/*
2 6 5
1 2
1 3
2 5
3 6
5 6
=> 6

*/
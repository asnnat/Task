#include<stdio.h>
main()
{
    int m;
    int n;
    scanf("%d %d", &m, &n);
    int a[m][n];
    int i, j;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }
    int b[m][n];
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}

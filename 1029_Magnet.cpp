#include<iostream>
#include<stdio.h>
using namespace std;
main()
{
    int n, m, q;
    scanf("%d %d %d", &n, &m, &q);
    char magnet[n+1];
    int i, j;
    for(i = 1; i <= n; i++)
    {
        magnet[i] = 'N';
    }
    for(i = 0; i < m; i++)
    {
        int start, sum;
        scanf("%d %d", &start, &sum);
        for(j = start; j <= start+sum-1; j++)
        {
            if(magnet[j] == 'N')
                magnet[j] = 'S';
            else
                magnet[j] = 'N';    
        }
        /*
        for(j = 1; j <= n; j++)
        {
            printf("%d %c\n", j,magnet[j]);
        }
        */
    }
    int above[n+1];
    int under[n+1];
    for(i = 1; i <= n; i++)
    {
        above[i] = 0;
        if(i != 1)
        {
            if(magnet[i] == magnet[i-1])
            {
                above[i] += above[i-1]+1;
            }
        }
        under[n-i+1] = 0;
        if(n-i+1 != n)
        {
            if(magnet[n-i+1] == magnet[n-i+2])
            {
                under[n-i+1] += under[n-i+2]+1;
            }
        }
    }
    /*
    for(i = 1; i <= n; i++)
    {
        printf("%d %c %d %d\n", i, magnet[i], above[i], under[i]);
    }
    */
    for(i = 0; i <q; i++)
    {
        int temp;
        scanf("%d",&temp);
        printf("%d\n", above[temp]+under[temp]+1);
    }
}
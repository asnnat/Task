#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int cmpfunc(const void *a,const void *b)
{
    return (*(int*)b - *(int*)a);
}

main()
{
    int n;
    cin >> n;
    int a[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        a[i]=-1;
    }
    //printf("\n");
    for(i=1;i<=n;i++)
    {
        /*
        for(j=0;j<n;j++)
        {
            printf("%d ",a[j]);
        }
        printf("\n");
        */
        char c;
        cin >> c;
        if(c=='P')
        {
            cin >> a[n-1];
        }
        qsort(a,n,sizeof(int),cmpfunc);
        if(c=='Q')
        {
            cout << a[0] << endl;
            a[0]=-1;
        }
        /*
        for(j=0;j<n;j++)
        {
            printf("%d ",a[j]);
        }
        */
    }
}
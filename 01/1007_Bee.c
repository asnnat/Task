#include<stdio.h>
main()
{
    int a[24],x=0;
    int n;
    int max=0;
    int i,j;
    scanf("%d",&n);
    while(n!=-1)
    {
        a[x]=n;
        if(a[x]>max)
        {
            max=a[x];
        }
        x++;
        scanf("%d",&n);
    }
    int b[max][2];
    int p=1,q=1,r=0;
    for(i=1;i<=max;i++)
    {
        int d=0,e=0,f=0;
        for(j=0;j<p;j++)
        {
            e++;
        }
        for(j=0;j<q;j++)
        {
            f++;
        }
        for(j=0;j<r;j++)
        {
            e++;
            f--;
        }
        p+=d;
        q+=e;
        r+=f;
        b[i][0]=q;
        b[i][1]=p+q+r;
    }
    for(i=0;i<x;i++)
    {
        printf("%d %d\n",b[a[i]][0],b[a[i]][1]);
    }
}


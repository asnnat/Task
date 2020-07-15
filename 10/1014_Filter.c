#include<stdio.h>
main()
{
    int w,h,n;
    scanf("%d %d %d",&w,&h,&n);
    int a[w+1];
    int i,j;
    for(i=1;i<=w;i++)
    {
        a[i]=0;
    }
    for(i=0;i<n;i++)
    {
        int s;
        int f;
        scanf("%d %d",&s,&f);
        int x=s+f;
        if(x>w)
        {
            x=w;
        }
        for(j=s+1;j<=x;j++)
        {
            a[j]++;
        }
    }
    int ans1=0;
    int ans2=0;
    for(i=1;i<=w;i++)
    {
        if(a[i]==0)
        {
            ans1++;
        }
        if(a[i]==1)
        {
            ans2++;
        }
    }
    printf("%d %d",ans1*h,ans2*h);
}
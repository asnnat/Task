#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    int i,j;
    int x;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]<a[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
    x=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                b[i]++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(b[i]>x)
        {
            x=b[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(b[i]==x)
        {
            printf("%d ",a[i]);
        }
    }
}

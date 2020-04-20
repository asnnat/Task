#include<stdio.h>

unsigned long long int c[301];
int i,j,k;

void func(int x,int y)
{
    printf("%d %d ",x,y);
    c[y]=0;
    for(i=1;i<=y;i++)
    {
        for(j=1;j<=y+i;j++)
        {
            if(j<x)
            {
                for(k=x;k<=y+i+j;k++)
                {
                    c[y]+=(i*j*k)%(i+j+k);
                }
            }
            else
            {
                for(k=1;k<=y+i+j;k++)
                {
                    c[y]+=(i*j*k)%(i+j+k);
                }
            }
        }
    }
    if(x!=1)
    {
        c[y]+=c[x-1];
    }
    printf("%d %llu\n",y,c[y]);
}

main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("i=%d ",i);
        if(i==0)
        {
            func(1,b[i]);
        }
        else
        {
            func(b[i-1]+1,b[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%llu\n",c[a[i]]);
    }
}
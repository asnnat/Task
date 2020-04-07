#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int x,y,z;
    int i;
    unsigned long long int sumn=1;
    unsigned long long int sumx=1;
    x=n/2;
    for(i=x+1;i<=n;i++)
    {
        sumn*=i;
    }
    if(n%2==0)
    {
        for(i=1;i<=x;i++)
        {
            sumx*=i;
        }
    }
    else
    {
        for(i=1;i<=x+1;i++)
        {
            sumx*=i;
        }
    }
    z=sumn/sumx;
    if(n%2==1)
    {
        z=z*2;
    }
    printf("%d",z);
}


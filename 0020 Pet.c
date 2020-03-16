#include<stdio.h>
main()
{
    int x[5];
    int i,j,k;
    int a,b,c,d;
    int max=-1;
    for(i=0;i<5;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        x[i]=a+b+c+d;
    }
    for(i=0;i<5;i++)
    {
        if(max<x[i])
        {
            max=x[i];
        }
    }
    for(i=0;i<5;i++)
    {
        if(max==x[i])
        {
            printf("%d %d",i+1,x[i]);
            printf("\n");
        }
    }
}

#include<stdio.h>
main()
{
    double a;
    double b;
    scanf("%lf %lf",&a,&b);
    double i;
    int x;
    int y;
    if(a>b)
    {
        for(i=1;i<b;i++)
        {
            if(a%i==0 && b%i==0)
            {
                x=i;
            }
        }
        printf("%d",x);
    }
    else
    {
        for(i=1;i<a;i++)
        {
            if(a%i==0 && b%i==0)
            {
                y=i;
            }
        }
        printf("%d",y);
    }
}

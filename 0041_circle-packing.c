#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    float x=n;
    if(n%2==0)
    {
        printf("%f",x);
    }
    else
    {
        x++;
        if(n==1)
        {
            printf("%f",x);
        }
        else if(n==3)
        {
            printf("%f",x-0.267949);
        }
        else
        {
            printf("%f",x-0.535898);
        }
    }
}

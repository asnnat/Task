#include<stdio.h>
main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(b>a)
    {
        if(b%a==0)
        {
            printf("%d",b/a);
        }
        else
        {
            printf("%d",(b/a)+1);
        }
    }
    else
    {
        printf("2");
    }
}

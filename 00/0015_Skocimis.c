#include<stdio.h>
main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int i;
    int x=0;
    int y=0;
    for(i=b+1;i<c;i++)
    {
        x++;
    }
    for(i=a+1;i<b;i++)
    {
        y++;
    }
    if(x>=y)
    {
        printf("%d",x);
    }
    else
    {
        printf("%d",y);
    }
}

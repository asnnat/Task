/*
#include<stdio.h>
main()
{
    int d,m;
    scanf("%d %d",&d,&m);
    int x=0;
    int a=d-1;
    int i;
    for(i=1;i<m;i++)
    {
        if(i==2)
        {
            x=x+28;
        }
        else if(i==4||i==6||i==9||i==11)
        {
            x=x+30;
        }
        else
        {
            x=x+31;
        }
    }
    for(i=0;i<a;i++)
    {
        x++;
    }
    x=x%7;
    if(x==0)
    {
        printf("Thursday");
    }
    else if(x==1)
    {
        printf("Friday");
    }
    else if(x==2)
    {
        printf("Saturday");
    }
    else if(x==3)
    {
        printf("Sunday");
    }
    else if(x==4)
    {
        printf("Monday");
    }
    else if(x==5)
    {
        printf("Tuesday");
    }
    else
    {
        printf("Wednesday");
    }
}
*/
#include<stdio.h>
main()
{
    int d,m;
    scanf("%d %d",&d,&m);
    int i,j,k;
    int n=0;
    n+=d;
    for(i=1;i<m;i++)
    {
        if(i==2)
        {
            n+=28;
        }
        else if(i==4||i==6||i==9||i==11)
        {
            n+=30;
        }
        else
        {
            n+=31;
        }
    }
    n--;
    if(n%7==0)
    {
        printf("Thursday");
    }
    else if(n%7==1)
    {
        printf("Friday");
    }
    else if(n%7==2)
    {
        printf("Saturday");
    }
    else if(n%7==3)
    {
        printf("Sunday");
    }
    else if(n%7==4)
    {
        printf("Monday");
    }
    else if(n%7==5)
    {
        printf("Tuesday");
    }
    else
    {
        printf("Wednesday");
    }
}

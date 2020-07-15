#include<iostream>
using namespace std;
main()
{
    int r,g;
    scanf("%d %d",&r,&g);
    int min;
    if(r<=g)
    {
        min=r;
    }
    else
    {
        min=g;
    }
    int i;
    for(i=1;i<=min;i++)
    {
        if(r%i==0 && g%i==0)
        {
            printf("%d %d %d\n",i,r/i,g/i);
        }
    }
}
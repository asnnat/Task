#include<stdio.h>
main()
{
    int x;
    scanf("%d",&x);
    int a[5];
    int i,j;
    for(i=0;i<5;i++)
    {
        a[i]=0;
    }
    for(i=1;i<=x;i++)
    {
        int y=i;
        while(y>=100)
        {
            a[4]++;
            y-=100;
        }
        if(y>=90)
        {
            a[4]++;
            a[2]++;
            y-=90;
        }
        if(y>=50)
        {
            a[3]++;
            y-=50;
        }
        if(y>=40)
        {
            a[3]++;
            a[2]++;
            y-=40;
        }
        while(y>=10)
        {
            a[2]++;
            y-=10;
        }
        if(y>=9)
        {
            a[2]++;
            a[0]++;
            y-=9;
        }
        if(y>=5)
        {
            a[1]++;
            y-=5;
        }
        if(y>=4)
        {
            a[1]++;
            a[0]++;
            y-=4;
        }
        while(y>=1)
        {
            a[0]++;
            y--;
        }
    }
    for(j=0;j<5;j++)
    {
        printf("%d ",a[j]);
    }
}

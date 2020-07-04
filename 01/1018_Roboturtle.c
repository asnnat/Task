#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    char a,b;
    int c;
    int x=0;
    int y=0;
    char z='E';
    int temp=0;
    int i;
    for(i=0;i<n;i++)
    {
        scanf(" %c %c %d",&a,&b,&c);
        if(z=='E')
        {
            if(a=='R'&&b=='T')
            {
                z='S';
            }
            if(a=='L'&&b=='T')
            {
                z='N';
            }
            if(a=='B'&&b=='W')
            {
                z='W';
            }
            //printf("E->%c\n",z);
        }
        else if(z=='N')
        {
            if(a=='R'&&b=='T')
            {
                z='E';
            }
            if(a=='L'&&b=='T')
            {
                z='W';
            }
            if(a=='B'&&b=='W')
            {
                z='S';
            }
            //printf("N->%c\n",z);
        }
        else if(z=='W')
        {
            if(a=='R'&&b=='T')
            {
                z='N';
            }
            if(a=='L'&&b=='T')
            {
                z='S';
            }
            if(a=='B'&&b=='W')
            {
                z='E';
            }
            //printf("W->%c\n",z);
        }
        else
        {
            if(a=='R'&&b=='T')
            {
                z='W';
            }
            if(a=='L'&&b=='T')
            {
                z='E';
            }
            if(a=='B'&&b=='W')
            {
                z='N';
            }
            //printf("S->%c\n",z);
        }
        if(z=='E')
        {
            x+=c;
        }
        if(z=='W')
        {
            x-=c;
        }
        if(z=='N')
        {
            y+=c;
        }
        if(z=='S')
        {
            y-=c;
        }
        //printf("%d %d\n",x,y);
        if(x<=-50000||x>=50000||y<=-50000||y>=50000)
        {
            printf("DEAD");
            temp++;
            i=n;
        }
    }
    if(temp==0)
    {
        printf("%d %d\n%c",x,y,z);
    }
}
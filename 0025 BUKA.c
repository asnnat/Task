#include<stdio.h>
#include<strings.h>
main()
{
    char a[100];
    char b;
    char c[100];
    int i;
    int x,z;
    for(i=0;i<100;i++)
    {
        a[i]='\0';
        c[i]='\0';
    }
    gets(a);
    scanf("%c ",&b);
    gets(c);
    x=strlen(a);
    z=strlen(c);
    if(b=='+')
    {
        if(x>z)
        {
            for(i=0;i<x;i++)
            {
                if(i==0||i==x-z)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
        }
        else if(x<z)
        {
            for(i=0;i<z;i++)
            {
                if(i==0||i==z-x)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
        }
        else
        {
            for(i=0;i<x;i++)
            {
                if(i==0)
                {
                    printf("2");
                }
                else
                {
                    printf("0");
                }
            }
        }
    }
    else
    {
        for(i=0;i<x+z-1;i++)
        {
            if(i==0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
    }
}

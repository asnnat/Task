#include<stdio.h>
main()
{
    char a[15];
    char y;
    int i=0,j;
    int l;
    int x;
    scanf("%s",&a);
    while(1)
    {
        if(a[i]=='\0')
        {
            l=i;
            break;
        }
        i++;
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<l;j++)
        {

            if((j+1)%3==0)
            {
                y='*';
            }
            else
            {
                y='#';
            }
            if(i==0||i==4)
            {
                printf("..%c.",y);
            }
            else if(i==1||i==3)
            {
                printf(".%c.%c",y,y);
            }
            else
            {
                if(((j+1)%3==0||(j+1)%3==1)&&j!=0)
                {
                    printf("*.%c.",a[j]);
                }
                else
                {
                    printf("#.%c.",a[j]);
                }
            }
            if(j==l-1)
            {
                if(i==2)
                {
                    if((j+1)%3==0)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf("#");
                    }
                }
                else
                {
                    printf(".");
                }
            }
        }
        printf("\n");
    }
}

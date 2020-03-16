#include<stdio.h>
#include<strings.h>
main()
{
    int i,j,k;
    int l;
    char a[50];
    int b[3];
    for(i=0;i<3;i++)
    {
        b[i]=0;
    }
    b[0]=1;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='A')
        {
            if(b[0]==1)
            {
                b[0]=0;
                b[1]=1;
            }
            else if(b[1]==1)
            {
                b[0]=1;
                b[1]=0;
            }
        }
        else if(a[i]=='B')
        {
            if(b[1]==1)
            {
                b[1]=0;
                b[2]=1;
            }
            else if(b[2]==1)
            {
                b[1]=1;
                b[2]=0;
            }
        }
        else if(a[i]=='C')
        {
            if(b[0]==1)
            {
                b[0]=0;
                b[2]=1;
            }
            else if(b[2]==1)
            {
                b[0]=1;
                b[2]=0;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        if(b[i]==1)
        {
            printf("%d",i+1);
        }
    }
}

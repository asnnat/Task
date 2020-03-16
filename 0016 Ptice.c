#include<stdio.h>
main()
{
    int n;
    scanf("%d ",&n);
    char a[n];
    char x[n];
    char y[n];
    char z[n];
    int i,j;
    int k=1;
    int p;
    int b[3];
    int c[3];
    for(i=0;i<3;i++)
    {
        b[i]=0;
        c[i]=0;
    }
    for(i=0;i<n;i++)
    {
        a[i]='\0';
        x[i]='\0';
        y[i]='\0';
        z[i]='\0';
    }
    gets(a);
    for(i=0;i<n;i++)
    {
        if(i==0||i%3==0)
        {
            x[i]='A';
        }
        else if(i==1||(i+2)%3==0)
        {
            x[i]='B';
        }
        else
        {
            x[i]='C';
        }
        if(i%2==0)
        {
            y[i]='B';
        }
        else if((i+1)%4==0)
        {
            y[i]='C';
        }
        else
        {
            y[i]='A';
        }
        if(k>6)
        {
            k=1;
        }
        if(k==1||k==2)
        {
            z[i]='C';
        }
        else if(k==3||k==4)
        {
            z[i]='A';
        }
        else
        {
            z[i]='B';
        }
        k++;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==x[i])
        {
            b[0]+=1;
        }
        if(a[i]==y[i])
        {
            b[1]+=1;
        }
        if(a[i]==z[i])
        {
            b[2]+=1;
        }
    }
    for(i=0;i<3;i++)
    {
        c[i]=b[i];
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(b[i]<b[j])
            {
                p=b[i];
                b[i]=b[j];
                b[j]=p;
            }
        }
    }
    printf("%d",b[0]);
    if(c[0]==b[0])
    {
        printf("\nAdrian");
    }
    if(c[1]==b[0])
    {
        printf("\nBruno");
    }
    if(c[2]==b[0])
    {
        printf("\nGoran");
    }
}

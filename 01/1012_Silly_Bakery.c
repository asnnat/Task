#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int a[n][5];
    float b[n*5];
    int c=0;
    int i,j,k;
    int x=5;
    float y,z=0;
    int all=0;
    for(i=0;i<5*n;i++)
    {
        b[i]=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]!=0)
            {
                if(x>j)
                {
                    x=j;
                }
                if(j==0)
                {
                    b[c]=a[i][j];
                    c++;
                }
                else if(j==1)
                {
                    b[c]=a[i][j]*0.75;
                    c++;
                }
                else if(j==2)
                {
                    b[c]=a[i][j]*0.5;
                    c++;
                }
                else if(j==3)
                {
                    b[c]=a[i][j]*0.25;
                    c++;
                }
                else
                {
                    b[c]=a[i][j]*0.125;
                    c++;
                }
            }
        }
    }
    if(x==0)
    {
        y=1;
    }
    else if(x==1)
    {
        y=0.75;
    }
    else if(x==1)
    {
        y=0.5;
    }
    else if(x==1)
    {
        y=0.25;
    }
    else
    {
        y=0.125;
    }
    z=y;
    if(z-b[0]<=0)
    {
        all++;
    }
    for(i=0;i<c;i++)
    {
        z=z-b[i];
        while(z<0)
        {
            all++;
            z+=y;
        }
    }
    printf("%d",all);
}

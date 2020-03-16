#include<stdio.h>
main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    char a[n];
    int i,j,k;
    int x,y,z;
    int max=0;
    for(i=0;i<n;i++)
    {
        a[i]='\0';
    }
    scanf("%s",&a);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            x=0;
            y=0;
            z=0;
            for(k=i;k<j;k++)
            {
                if(a[k]=='R')
                {
                    x++;
                }
                else
                {
                    y++;
                }
                z++;
            }
            if(y==m*x)
            {
                if(z>max)
                {
                    max=z;
                }
            }
        }
    }
    printf("%d",max);
}

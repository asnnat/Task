#include<stdio.h>
main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    char a[m][n];
    int b[n];
    int i,j,k;
    int x;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        x=0;
        for(j=0;j<m;j++)
        {
            if(a[j][i]=='.')
            {
                x++;
            }
            else
            {
                if(b[i]>x)
                {
                    b[i]=x;
                }
                for(k=x-1;k>=x-b[i];k--)
                {
                    a[k][i]='#';
                }
                j=m;
            }
        }
        if(x==m)
        {
            for(j=m-b[i];j<m;j++)
            {
                a[j][i]='#';
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
}

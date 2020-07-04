#include<stdio.h>
main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int i,j;
    int a[n-1];
    int b[n-1];
    int c[n-1];
    int x=0;
    for(i=0;i<n-1;i++)
    {
        a[i]=0;
        b[i]=0;
        c[i]=0;
        a[i]=2+i;
        b[i]=a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=0)
        {
            for(j=i;j<n-1;j++)
            {
                if(b[j]!=0)
                {
                    if(b[j]%a[i]==0)
                    {
                        c[x]=b[j];
                        b[j]=0;
                        x++;
                    }
                }
            }
            a[i]=0;
        }
    }
    printf("%d",c[k-1]);
}

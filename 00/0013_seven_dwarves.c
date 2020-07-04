#include<stdio.h>
main()
{
    int a[9];
    int sum=0;
    int i,j,k;
    for(i=0;i<9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<9;j++)
        {
            sum=sum-a[i]-a[j];
            if(sum==100)
            {
                for(k=0;k<9;k++)
                {
                    if(k!=i&&k!=j)
                    {
                        printf("%d\n",a[k]);
                    }
                }
                break;
            }
            sum=sum+a[i]+a[j];
        }
    }
}

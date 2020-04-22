#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    unsigned long long int ans=1;
    int i,j,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n==1)
    {
        printf("%d",a[n-1]);
    }
    while(1)
    {
        int temp=0;
        int check=0;
        int change;
        for(i=1;i<=a[n-1];i++)
        {
            printf("%d ",i);
            for(j=0;j<n;j++)
            {
                if(a[j]%i==0)
                {
                    a[j]/=i;
                    change=j;
                    temp++;
                }
            }
            printf("temp=%d\n",temp);
            if(temp==1)
            {
                a[change]*=i;
                check++;
            }
            if(temp>1)
            {
                ans*=i;
                for(j=0;j<n;j++)
                {
                    for(k=j+1;k<n;k++)
                    {
                        if(a[j]>a[k])
                        {
                            int x=a[j];
                            a[j]=a[k];
                            a[k]=x;
                        }
                    }
                }
            }
            for(j=0;j<n;j++)
            {
                printf("%d ",a[j]);
            }
            printf("ans=%d\n",ans);
            temp=0;
        }
        if(check==a[n-1])
        {
            break;
        }
        check=0;
    }
    for(i=0;i<n;i++)
    {
        ans*=a[i];
    }
    printf("%llu",ans);
}
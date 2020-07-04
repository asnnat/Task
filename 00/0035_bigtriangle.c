#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    float max=0;
    float temp;
    int i,j,k;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(i!=j&&i!=k&&j!=k)
                {
                    temp=a[i]*b[j]+a[j]*b[k]+a[k]*b[i]-b[i]*a[j]-b[j]*a[k]-b[k]*a[i];
                    if(temp<0)
                    {
                        temp=-temp;
                    }
                    temp=temp/2;
                    if(temp>max)
                    {
                        max=temp;
                    }
                }
            }
        }
    }
    printf("%.3f",max);
}

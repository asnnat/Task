#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[3];
    int i,j,k;
    int check=2001;
    int ans2=0;
    int ans3=0;
    for(i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        a[i]=0;
        if(i>0)
        {
            a[i]=a[i-1];
        }
        a[i]+=x;
    }
    for(i=1;i<n-1;i++) //start num2
    {
        for(j=2;j<n;j++) // start sum3
        {
            b[0]=a[i-1];
            b[1]=a[j-1]-a[i-1];
            b[2]=a[n-1]-a[j-1];
            int max=b[0];
            int min=b[0];
            for(k=1;k<3;k++)
            {
                if(max<b[k])
                {
                    max=b[k];
                }
                if(min>b[k])
                {
                    min=b[k];
                }
            }
            if(max-min<check)
            {
                check=max-min;
                ans2=i+1;
                ans3=j+1;
            }
        }
    }
    printf("%d %d",ans2,ans3);
}
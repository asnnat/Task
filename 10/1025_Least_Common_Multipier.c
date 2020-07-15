#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int i,j,k;
    int a[n];
    unsigned long int LCM = 1;
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    while(1)
    {
        int allpass = 0;
        for(i = 2; i <= a[n-1]; i++)
        {
            int check = 0;
            int pass;
            for(j = 0; j < n; j++)
            {
                if(a[j]%i == 0)
                {
                    a[j] /= i;
                    check++;
                    pass = j;
                }
            }
            //printf("check = %d\n",check);
            if(check <= 1)
            {
                if(check == 1)
                    a[pass] *= i;
            }
            else
            {
                allpass++;
                LCM *= i;
                for(j = 0; j < n; j++)
                {
                    for(k = j+1; k < n; k++)
                    {
                        if(a[j] > a[k])
                        {
                            int temp = a[j];
                            a[j] = a[k];
                            a[k] = temp;
                        }
                    }
                }
                i = a[n-1]+1;
            }
        }
        /*
        printf("allpass=%d\n",allpass);
        printf("LCM = %lu\n",LCM);
        for(i = 0; i < n; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
        */
        if(allpass==0)
        {
            break;
        }
    }
    for(i = 0; i < n; i++)
    {
        LCM *= a[i];
    }
    printf("%lu",LCM);
}
#include<stdio.h>
#include<string.h> 
main()  
{  
    int a[7]; 
    char c[10000];  
    int sum = 7; 
    int i,j;
    for(i=0;i<7;i++)
    {
        a[i]=0;
    }
    while(1)  
    {  
        scanf("%s",c);  
        if(c[0] == '!')
        {
            break;
        }
        int l=strlen(c);
        for(i=0;i<l;i++) 
        {
            if(a[c[i]-'A']!=1000000)
            {
                a[c[i]-'A']++;  
            }
        }
        if(sum>1)  
        {  
            int min=0;  
            for(i=1;i<7;i++) 
            {
                if(a[i]<a[min])
                {
                    min = i;  
                }
            } 
            int count;
            for(i=0;i<7;i++)  
            {  
                count=0;  
                if(a[i]==a[min]&&i!=min)  
                {  
                    count++;  
                    break;  
                }  
            }  
            if(count==0)  
            {  
                a[min]=1000000;  
                sum--;  
            }  
        }  
    }  
    printf("%d",sum);  
    for(i = 0 ; i < sum ; i++)  
    {
        int max=0;
        int ans;
        for(j=0;j<7;j++)
        {
            if(a[j]>max&&a[j]!=1000000)
            {
                max=a[j];
                ans=j;
            }
        }
        printf("\n%c %d",'A'+ans,a[ans]);
        a[ans]=1000000;
    }
}  
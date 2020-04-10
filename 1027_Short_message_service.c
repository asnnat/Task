#include<stdio.h>
#include<string.h>
main()
{
    int a[7]; // point
    int b[7]; // -1 not used tp add | 0 added | 1 can not answer
    int i,j,k;
    for(i=0;i<7;i++)
    {
        a[i]=0;
        b[i]=-1;
    }
    char c[10000];
    scanf("%s",&c);
    int check=0;
    while(check==0)
    {
        int l=strlen(c);
        for(i=0;i<l;i++)
        {
            if(c[i]=='!')
            {
                check++;
            }
        }
        if(check!=0)
        {
            break;
        }
        for(i=0;i<l;i++)
        {
            if(b[c[i]-'A']!=1)
            {
                a[c[i]-'A']++;
                b[c[i]-'A']=0;
            }
        }
        int min=30000;
        int che=0;
        for(i=0;i<7;i++)
        {
            if(min>a[i]&&b[i]==0)
            {
                min=a[i];
            }
            if(b[i]==0)
            {
                che++;
            }
        }
        //printf("che=%d ",che);
        if(che>1)
        {
            int temp=0;
            int NumMin;
            for(i=0;i<7;i++)
            {
                if(min==a[i]&&b[i]==0)
                {
                    temp++;
                    NumMin=i;
                }
            }
            //printf("temp=%d ",temp);
            if(temp==1)
            {
                b[NumMin]=1;
            }
            //printf("NumMin=%d\n",NumMin);
        }
        /*
        for(i=0;i<7;i++)
        {
            printf("%c %d %d\n",'A'+i,a[i],b[i]);
        }
        */
        scanf("%s",&c);
    }
    /*
    for(i=0;i<7;i++)
    {
        printf("%c %d %d\n",'A'+i,a[i],b[i]);
    }
    */
   int sumans=0;
    for(i=0;i<7;i++)
    {
        if(b[i]==0)
        {
            sumans++;
        }
    }
    printf("%d\n",sumans);
    for(i=0;i<sumans;i++)
    {
        int max=0;
        int ans;
        for(j=0;j<7;j++)
        {
            if(b[j]==0&&max<a[j])
            {
                max=a[j];
                ans=j;
            }
        }
        printf("%c %d\n",'A'+ans,max);
        b[ans]=1;
    }
}
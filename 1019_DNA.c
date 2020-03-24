#include<stdio.h>
#include<string.h>
main()
{
    char a[200];
    char b[200];
    int i,j,k;
    scanf("%s %s",&a,&b);
    int la=strlen(a);
    int lb=strlen(b);
    //printf("%d %d",la,lb);
    int s=0;
    int max=0;
    for(i=0;i<la;i++)
    {
        for(j=0;j<lb;j++)
        {
            int sum=0;
            while(a[i+sum]==b[j+sum]&&i+sum<la&&j+sum<lb)
            {
                sum++;
            }
            if(sum>max)
            {
                max=sum;
                s=i;
            }
        }
    }
    //printf("%d\n",max);
    for(i=s;i<s+max;i++)
    {
        printf("%c",a[i]);
    }
}
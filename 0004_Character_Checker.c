#include<stdio.h>
main()
{
    char a[10001];
    int i=0;
    int m=0;
    int n=0;
    scanf("%c",&a[0]);
    while(a[i]>=65&&a[i]<=90 || a[i]>=97&&a[i]<=122)
    {
        if(a[i]>=65&&a[i]<=90)
        {
            m++;
        }
        else
        {
            n++;
        }
        i++;
        scanf("%c",&a[i]);
    }
    if(m==i)
    {
        printf("All Capital Letter");
    }
    if(n==i)
    {
        printf("All Small Letter");
    }
    if(m<i&&m>0)
    {
        printf("Mix");
    }
}

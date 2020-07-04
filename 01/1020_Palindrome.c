#include<stdio.h>
#include<string.h>
main()
{ 
    char a[200];
    gets(a);
    int l=strlen(a);
    int x=0,y;
    int i,j,k;
    for(i=0;i<l;i++)
    {
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A')||a[i]<='Z')
        {
            if(a[i]>='a'&&a[i]<='z')
            {
                a[i]-=32;
            }
        }
    }
    for(i=0;i<l;i++)
    {
        if(a[i]!=a[l-1-i])
        {
            printf("No");
            x++;
            break;
        }
    }
    if(x==0)
    {
        for(i=0;i<l/2;i++)
        {
            if(a[i]!=a[(l/2)-1-i])
            {
                printf("Palindrome");
                x++;
                break;
            }
       }
    }
    if(x==0)
    {
        printf("Double Palindrome");
    }
}


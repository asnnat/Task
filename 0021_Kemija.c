#include<stdio.h>
#include<strings.h>
main()
{
    char a[100];
    char b[100];
    int i,j=0;
    int l;
    for(i=0;i<100;i++)
    {
        a[i]='\0';
        b[i]='\0';
    }
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            if(a[i+1]=='p'&&a[i+2]==a[i])
            {
                a[i+1]='1';
                a[i+2]='1';

            }
        }
        if(a[i]!='1')
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%c",b[i]);
    }
}

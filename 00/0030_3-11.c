#include<stdio.h>
#include<strings.h>
main()
{
    char a[1000000];
    int l;
    int sumt=0;
    int sume=0;
    int i;
    scanf("%s",&a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='1')
        {
            sumt=sumt+1;
            sume=sume+1;
        }
        else if(a[i]=='2')
        {
            sumt=sumt+2;
            sume=sume+2;
        }
        else if(a[i]=='3')
        {
            sumt=sumt+3;
            sume=sume+3;
        }
        else if(a[i]=='4')
        {
            sumt=sumt+4;
            sume=sume+4;
        }
        else if(a[i]=='5')
        {
            sumt=sumt+5;
            sume=sume+5;
        }
        else if(a[i]=='6')
        {
            sumt=sumt+6;
            sume=sume+6;
        }
        else if(a[i]=='7')
        {
            sumt=sumt+7;
            sume=sume+7;
        }
        else if(a[i]=='8')
        {
            sumt=sumt+8;
            sume=sume+8;
        }
        else if(a[i]=='9')
        {
            sumt=sumt+9;
            sume=sume+9;
        }
        sumt=sumt%3;
        sume=sume%11;
        if(i!=l-1)
        {
            sume*=10;
        }
    }
    printf("%d %d",sumt,sume);
}


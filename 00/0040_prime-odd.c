#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int i;
    struct number
    {
        char x[1000];
        int l;
        char ans;
    }a[n];
    int c;
    int y;
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i].x);
        c=0;
        y=1;
        while(y)
        {
            if(a[i].x[c]!='\0')
            {
                c++;
            }
            else
            {
                a[i].l=c;
                y=0;
            }
        }
        if(a[i].l==1&&a[i].x[0]=='2')
        {
            a[i].ans='T';
        }
        else if(a[i].x[a[i].l-1]=='1'||a[i].x[a[i].l-1]=='3'||a[i].x[a[i].l-1]=='5'||a[i].x[a[i].l-1]=='7'||a[i].x[a[i].l-1]=='9')
        {
            a[i].ans='T';
        }
        else
        {
            a[i].ans='F';
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%c\n",a[i].ans);
    }
}

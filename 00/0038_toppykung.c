#include<stdio.h>
#include<strings.h>
main()
{
    int n;
    scanf("%d",&n);
    int i,j,k,m;
    struct toppykung
    {
        char word[30];
        int l;
    }a[n];
    char temp;
    int lmax=0;
    int x;
    int y;
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i].word);
        a[i].l=strlen(a[i].word);
        if(lmax<a[i].l)
        {
            lmax=a[i].l;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            x=0;
            for(k=0;k<lmax;k++)
            {
                if(a[i].word[k]=='\0'&&a[j].word[k]=='\0')
                {
                    k=lmax;
                }
                else
                {
                    if(a[i].word[k]==a[j].word[k])
                    {
                        x++;
                    }
                }
            }
            if(x==a[i].l&&x==a[j].l)
            {
                a[j].word[0]='\0';
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=0;k<lmax;k++)
            {
                if(a[i].word[k]>a[j].word[k])
                {
                    x=0;
                    for(m=0;m<k;m++)
                    {
                        if(a[i].word[m]==a[j].word[m])
                        {
                            x++;
                        }
                    }
                    if(x==k)
                    {
                        for(m=0;m<lmax;m++)
                        {
                            temp=a[i].word[m];
                            a[i].word[m]=a[j].word[m];
                            a[j].word[m]=temp;

                        }
                        y=a[i].l;
                        a[i].l=a[j].l;
                        a[j].l=y;
                    }
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i].word[0]!='\0')
        {
            for(j=0;j<a[i].l;j++)
            {
                printf("%c",a[i].word[j]);
            }
            printf("\n");
        }
    }
}

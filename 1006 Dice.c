#include<stdio.h>
#include<strings.h>
main()
{
    int n;
    scanf("%d",&n);
    struct word
    {
        char a[1000];
        int l;
        int b[6];
    }word[n];
    int i,j,k;
    int temp;
    for(i=0;i<n;i++)
    {
        scanf("%s",&word[i].a);
        word[i].l=strlen(word[i].a);
        word[i].b[0]=1;
        word[i].b[1]=2;
        word[i].b[2]=3;
        word[i].b[3]=5;
        word[i].b[4]=4;
        word[i].b[5]=6;
        for(j=0;j<word[i].l;j++)
        {
            if(word[i].a[j]=='F')
            {
                temp=word[i].b[3];
                word[i].b[3]=word[i].b[5];
                word[i].b[5]=temp;
                temp=word[i].b[0];
                word[i].b[0]=word[i].b[1];
                word[i].b[1]=temp;
                temp=word[i].b[0];
                word[i].b[0]=word[i].b[5];
                word[i].b[5]=temp;
            }
            if(word[i].a[j]=='B')
            {
                temp=word[i].b[3];
                word[i].b[3]=word[i].b[5];
                word[i].b[5]=temp;
                temp=word[i].b[0];
                word[i].b[0]=word[i].b[3];
                word[i].b[3]=temp;
                temp=word[i].b[0];
                word[i].b[0]=word[i].b[1];
                word[i].b[1]=temp;
            }
            if(word[i].a[j]=='L')
            {
                temp=word[i].b[0];
                word[i].b[0]=word[i].b[2];
                word[i].b[2]=temp;
                temp=word[i].b[0];
                word[i].b[0]=word[i].b[5];
                word[i].b[5]=temp;
                temp=word[i].b[0];
                word[i].b[0]=word[i].b[4];
                word[i].b[4]=temp;
            }
            if(word[i].a[j]=='R')
            {
                temp=word[i].b[0];
                word[i].b[0]=word[i].b[2];
                word[i].b[2]=temp;
                temp=word[i].b[2];
                word[i].b[2]=word[i].b[5];
                word[i].b[5]=temp;
                temp=word[i].b[4];
                word[i].b[4]=word[i].b[5];
                word[i].b[5]=temp;
            }
            if(word[i].a[j]=='C')
            {
                temp=word[i].b[1];
                word[i].b[1]=word[i].b[4];
                word[i].b[4]=temp;
                temp=word[i].b[2];
                word[i].b[2]=word[i].b[4];
                word[i].b[4]=temp;
                temp=word[i].b[4];
                word[i].b[4]=word[i].b[3];
                word[i].b[3]=temp;
            }
            if(word[i].a[j]=='D')
            {
                temp=word[i].b[1];
                word[i].b[1]=word[i].b[2];
                word[i].b[2]=temp;
                temp=word[i].b[2];
                word[i].b[2]=word[i].b[3];
                word[i].b[3]=temp;
                temp=word[i].b[4];
                word[i].b[4]=word[i].b[3];
                word[i].b[3]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",word[i].b[1]);
    }
}


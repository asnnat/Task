#include<stdio.h>

int n;
int a[30];
int b[30];
unsigned long long int c[301];
int i,j,k;

void func(int x,int y) //x=>start y=>b[y] 
{
    if(y<n)
    {
        printf("x=%d b[y]=%d ",x,b[y]);
        c[b[y]]=0;
        int p,q,r;
        for(i=1;i<=b[y];i++)
        {
            for(j=1;j<=b[y]+i;j++)
            {
                for(k=1;k<=b[y]+i+j;k++)
                {
                    c[b[y]]+=(i*j*k)%(i+j+k);
                }
            }
        }
        printf("%llu ",c[b[y]]);
        if(y!=0&&b[y]>b[y-1])
        {
            c[b[y]]+=c[b[y-1]];
        }
        printf("%llu\n",c[b[y]]);
        func(b[y]+1,y+1);
    }
    else
    {
        return ;
    }
}

main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                int x=b[i];
                b[i]=b[j];
                b[j]=x;
            }
        }
    }
    func(1,0);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%llu\n",c[a[i]]);
    }
}
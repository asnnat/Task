#include<stdio.h>

int y,x;
char a[7][7];
int i,j,k,l;
int score=0;
int count=0;

void print()
{
    for(j=1;j<y+1;j++)
    {
        for(k=1;k<x+1;k++)
        {
            printf("%c ",a[j][k]);
        }
        printf("\n");
    }
}

void block(int p,int q,char r) // p=>y q=>x
{
    if(a[p][q]=='#'||a[p][q]=='-')
    {
        score-=5;
    }
    else
    {
        if(r=='L')
        {
            if(q-1<1||a[p][q-1]!='-')
            {
                score-=5;
            }
            else
            {
                a[p][q-1]=a[p][q];
                a[p][q]='-';
            }
        }
        else
        {
            if(q+1>x||a[p][q+1]!='-')
            {
                score-=5;
            }
            else
            {
                a[p][q+1]=a[p][q];
                a[p][q]='-';
            }
        }
    }
}

void check()
{
    for(j=0;j<x+1;j++)
    {
        for(k=y+1;k>0;k--)
        {
            if(a[k][j]!='-'&&a[k][j]!='#')
            {
                int p=k;
                while(a[p+1][j]=='-')
                {
                    a[p+1][j]=a[p][j];
                    a[p][j]='-';
                    p++;
                }
            }
        }
    }
}

void plus(int p,int q,char r) // p=>y q=>x
{
    if(a[p][q]=='-')
    {
        return ;
    }
    if(a[p][q]=='#')
    {
        return ;
    }
    if(a[p][q]=='!')
    {
        return ;
    }
    if(r==a[p][q-1])
    {
        count++;
        a[p][q]='!';
        plus(p,q-1,r);
    }
    if(r==a[p][q+1])
    {
        count++;
        a[p][q]='!';
        plus(p,q+1,r);
    }
    if(r==a[p-1][q])
    {
        count++;
        a[p][q]='!';
        plus(p-1,q,r);
    }
    if(r==a[p+1][q])
    {
        count++;
        a[p][q]='!';
        plus(p+1,q,r);
    }
    if(count!=0)
    {
        a[p][q]='!';
        count=0;
        return ;
    }
}

void change()
{
    int b,c;
    for(b=1;b<y+1;b++)
    {
        for(c=1;c<x+1;c++)
        {
            if(a[b][c]=='!')
            {
                a[b][c]='-';
                score+=5;
            }
        }
    }
}

main()
{
    scanf("%d%d",&y,&x);
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            a[i][j]='#';
            if(i>0&&i<y+1&&j>0&&j<x+1)
            {
                scanf(" %c",&a[i][j]);
            }
        }
    }
    int m;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        int p,q;
        char r;
        scanf("%d%d",&p,&q);
        scanf(" %c",&r);
        block(p+1,q+1,r);
        check();
        for(l=0;l<3;l++)
        {
            for(j=1;j<y+1;j++)
            {
                for(k=1;k<x+1;k++)
                {
                    plus(j,k,a[j][k]);
                    change();
                }
            }
            check();
        }
        /*
        printf("%d\n",score);
        print();
        printf("\n");
        */
    }
    printf("%d\n",score);
    print();
}
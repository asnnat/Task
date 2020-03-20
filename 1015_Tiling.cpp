#include<iostream>
using namespace std;

int a[19][19];

int check(int i,int j,int x)
{
    if(a[i][j]==a[i-1][j-1])
    {
        check(i-1,j-1,x++);
    }
    if(a[i][j]==a[i-1][j])
    {
        check(i-1,j,x++);
    }
    if(a[i][j]==a[i-1][j+1])
    {
        check(i-1,j+1,x++);
    }
    if(a[i][j]==a[i][j-1])
    {
        check(i,j-1,x++);
    }
    if(a[i][j]==a[i][j+1])
    {
        check(i,j+1,x++);
    }
    if(a[i][j]==a[i+1][j-1])
    {
        check(i+1,j-1,x++);
    }
    if(a[i][j]==a[i+1][j])
    {
        check(i+1,j,x++);
    }
    if(a[i][j]==a[i+1][j+1])
    {
        check(i+1,j+1,x++);
    }
    return x;
}
int change(int i,int j)
{
    if(a[i][j]==a[i-1][j-1])
    {
        a[i-1][j-1]=0;
        change(i-1,j-1);
    }
    if(a[i][j]==a[i-1][j])
    {
        a[i-1][j]=0;
        change(i-1,j);
    }
    if(a[i][j]==a[i-1][j+1])
    {
        a[i-1][j+1]=0;
        change(i-1,j+1);
    }
    if(a[i][j]==a[i][j-1])
    {
        a[i][j-1]=0;
        change(i,j-1);
    }
    if(a[i][j]==a[i][j+1])
    {
        a[i][j+1]=0;
        change(i,j+1);
    }
    a[i][j]=0;
}

main()
{
    int n;
    cin >> n;
    for(int i=0;i<n+2;i++)
    {
        for(int j=0;j<n+2;j++)
        {
            a[i][j]=0;
            if(i!=0&&i!=n+1&&j!=0&&j!=n+1)
            {
                cin >> a[i][j];
            }
        }
    }
    int ans=0;
    for(int i=0;i<n+2;i++)
    {
        for(int j=0;j<n+2;j++)
        {
            if(a[i][j]!=0)
            {
                int x=0;
                check(i,j,x);
                if(check(i,j,x)!=3)
                    change(i,j);
            }
        }
    }
    cout << ans;
}
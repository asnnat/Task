#include<iostream>
using namespace std;
char a[34][34];
int temp;
int maxarea=-1;
void change(int x,int y,int m,int n)
{
    if(y<2||y>m+1||x<2||x>n+1)
    {
        return ;
    }
    if(a[y][x]!='.')
    {
        return ;
    }
    if(a[y][x-1]=='#'||a[y][x+1]=='#'||a[y-1][x]=='#'||a[y+1][x]=='#')
    {
        return ;
    }
    temp++;
    if(a[y][x-2]!='#')
    {
        a[y][x]='@';
        change(x-1,y,m,n);
    }
    if(a[y][x+2]!='#')
    {
        a[y][x]='@';
        change(x+1,y,m,n);
    }
    if(a[y-2][x]!='#')
    {
        a[y][x]='@';
        change(x,y-1,m,n);
    }
    if(a[y+2][x]!='#')
    {
        a[y][x]='@';
        change(x,y+1,m,n);
    }
    if(temp>maxarea)
    {
        maxarea=temp;
    }
}
main()
{
    for(int i=0;i<34;i++)
    {
        for(int j=0;j<34;j++)
        {
            a[i][j]='.';
        }
    }
    int m,n;
    cin >> m >> n;
    for(int i=2;i<m+2;i++)
    {
        for(int j=2;j<n+2;j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=2;i<m+2;i++)
    {
        for(int j=2;j<n+2;j++)
        {
            if(a[i][j]=='.')
            {
                temp=0;
                change(j,i,m,n);
            }
        }
    }
    cout << maxarea;
    cout << endl;
    for(int i=2;i<m+2;i++)
    {
        for(int j=2;j<n+2;j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    
}
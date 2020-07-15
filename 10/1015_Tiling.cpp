#include<iostream>
using namespace std;

int n;
int a[19][19];
int sum;
int ans=0;

void check(int y,int x,int z)
{
    if(y>0&&y<n+1&&x>0&&x<n+1)
    {
        if(a[y][x]!=0)
        {
            a[y][x]=-1;
            /*
            if(a[y-1][x-1]==z)
            {
                sum++;
                a[y-1][x-1]=-1;
                check(y-1,x-1,z);
            }
            */
            if(a[y-1][x]==z)
            {
                sum++;
                a[y-1][x]=-1;
                check(y-1,x,z);
            }
            /*
            if(a[y-1][x+1]==z)
            {
                sum++;
                a[y-1][x+1]=-1;
                check(y-1,x+1,z);
            }
            */
            if(a[y][x-1]==z)
            {
                sum++;
                a[y][x-1]=-1;
                check(y,x-1,z);
            }
            if(a[y][x+1]==z)
            {
                sum++;
                a[y][x+1]=-1;
                check(y,x+1,z);
            }
            /*
            if(a[y+1][x-1]==z)
            {
                sum++;
                a[y+1][x-1]=-1;
                check(y+1,x-1,z);
            }
            */
            if(a[y+1][x]==z)
            {
                sum++;
                a[y+1][x]=-1;
                check(y+1,x,z);
            }
            /*
            if(a[y+1][x+1]==z)
            {
                sum++;
                a[y+1][x+1]=-1;
                check(y+1,x+1,z);
            }
            */
        }
        else
        {
            return ;
        }
    }
    else
    {
        return ;
    }
}

void three(int y,int x)
{
    if(a[y][x]==a[y][x+1]&&a[y][x]==a[y+1][x])
    {
        ans++;
    }
    if(a[y][x]==a[y+1][x]&&a[y][x]==a[y+1][x-1])
    {
        ans++;
    }
    if(a[y][x]==a[y][x+1]&&a[y][x]==a[y+1][x+1])
    {
        ans++;
    }
    if(a[y][x]==a[y+1][x]&&a[y][x]==a[y+1][x+1])
    {
        ans++;
    }
    return ;
}

void clear()
{
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(a[i][j]==-1)
            {
                a[i][j]=0;
            }
        }
    }
}

main()
{
    cin >> n;
    for(int i=0;i<19;i++)
    {
        for(int j=0;j<19;j++)
        {
            a[i][j]=0;
            if(i>0&&i<n+1&&j>0&&j<n+1)
            {
                cin >> a[i][j];
            }
        }
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(a[i][j]!=0)
            {
                sum=0;
                check(i,j,a[i][j]);
                /*
                cout << i << ' ' << j << endl;
                for(int k=1;k<n+1;k++)
                {
                    for(int l=1;l<n+1;l++)
                    {
                        cout << a[k][l] << ' ';
                    }
                    cout << endl;
                }
                cout << endl;
                */
                if(sum==2)
                {
                    three(i,j);
                }
                clear();
                /*
                for(int k=1;k<n+1;k++)
                {
                    for(int l=1;l<n+1;l++)
                    {
                        cout << a[k][l] << ' ';
                    }
                    cout << endl;
                }
                cout << endl;
                */
            }
            else
            {
                a[i][j]=0;
            }
            
        }
    }
    cout << ans;
}
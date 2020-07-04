#include<iostream>
using namespace std;
main()
{
    char a[101][101];
    for(int i=1;i<101;i++)
    {
        for(int j=1;j<101;j++)
        {
            a[i][j]='.';
        }
    }
    int n;
    cin >> n;
    int maxx=0;
    int maxy=0;
    for(int i=0;i<n;i++)
    {
        int s,h;
        cin >> s >> h;
        if(maxy<h)
        {
            maxy=h;
        }
        for(int j=0;j<h;j++)
        {
            for(int k=0;k<2*(h-j);k++)
            {
                if(a[10-j][s+k+j]!='X')
                {
                    if(k==0)
                    {
                        if(a[10-j][s+k+j]==92)
                        {
                            a[10-j][s+k+j]='v';
                        }
                        else
                        {
                            a[10-j][s+k+j]='/';
                        }
                    }
                    else if(k==2*(h-j)-1)
                    {
                        if(a[10-j][s+k+j]=='/')
                        {
                            a[10-j][s+k+j]='v';
                        }
                        else
                        {
                            a[10-j][s+k+j]=92; // '\'
                        }
                    }
                    else
                    {
                        a[10-j][s+k+j]='X';
                    }
                    if(maxx<s+j+k)
                    {
                        maxx=s+j+k;
                    }
                }
            }
        }
    }
    for(int i=10-maxy+1;i<11;i++)
    {
        for(int j=1;j<maxx+1;j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}
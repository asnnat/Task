#include<iostream>
using namespace std;
main()
{
    int x,y;
    cin >> y >> x;
    char a[y][x];
    for(int i=0;i<y;i++)
    {
        for(int j=0;j<x;j++)
        {
            cin >> a[i][j];
        }
    }
    int n;
    cin >> n;
    int score=0;
    for(int i=0;i<n;i++)
    {
        int p,q;
        char r;
        cin >> p >> q >> r;
        if(a[p][q]=='#'||a[p][q]=='-')
            score-=5;
        if(r=='L')
            if(q-1<0)
                score-=5;
            else if(a[p][q-1]!='#')
                score-=5;
            else
                a[p][q-1]=a[p][q];
                a[p][q]='-';
                int x=1;
                while(a[p-x][q]!='-'&&p-x>=0)
                {
                    a[p-x-1][q-1]=a[p-x][q-1];
                    x++;
                }          
        if(r=='R')
            if(q+1>=x)
                score-=5;
            else if(a[p][q+1]!='#')
                score-=5;
        for(int j=0;j<y;j++)
        {
            for(int k=0;k<x;k++)
            {
                cout << a[j][k] << ' ';
            }
            cout << endl;
        }
    }
    cout << score << endl;
    /*
    for(int i=0;i<y;i++)
    {
        for(int j=0;j<x;j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    */
}
#include<iostream>
using namespace std;

char a[7][7];
int x,y;
int score=0;

void clear()
{
    for(int i=y;i>1;i--)
    {
        for(int j=x;j>1;j--)
        {
            if(a[i][j]!='-'&&a[i][j]!='#')
            {
                while(a[i-1][j]!='#')
                {
                    
                }
            }
        }
    }
}

main()
{
    cin >> y >> x;
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<7;j++)
        {
            a[i][j]='#';
            if(i>0&&i<y+1&&j>0&&j<x+1)
            {
                cin >> a[i][j];
            }
        }
    }
    int n;
    for(int i=0;i<n;i++)
    {
        int p,q;
        char r;
        cin >> p >> q >> r;
        if(a[p][q]=='-'||a[p][q]=='#')
        {
            score-=5;
        }
        else
        {
            if(r=='L')
            {
                if(q-1<1)
                {
                    score-=5;
                }
                else
                {
                    if(a[p][q-1]!='-')
                    {
                        score-=5;
                    }
                    else
                    {
                        a[p][q-1]=a[p][q];
                        a[p][q]='-';
                        clear();
                    }
                    
                }
                
            }
        }
    }
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<7;j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

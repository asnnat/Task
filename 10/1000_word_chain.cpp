#include<iostream>
#include<string>
using namespace std;
main()
{
    int m,n;
    cin >> m >> n;
    string a[n];
    int y=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=1;i<n;i++)
    {
        int x=0;
        for(int j=0;j<m;j++)
        {
            if(a[i][j]!=a[i-1][j])
            {
                x++;
            }
        }
        if(x>2)
        {
            cout << a[i-1];
            y++;
            break;
        }
    }
    if(y==0)
    {
        cout << a[n-1];
    }
}

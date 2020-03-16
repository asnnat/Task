#include<iostream>
using namespace std;
main()
{
    int m,n;
    cin >> n >> m;
    int l,k,c;
    cin >> l >> k >> c;

    int x=l*k*c;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int y;
            cin >> y;
            x+=y;
        }
    }
    if(x%c==0)
    {
        cout << x/c;
    }
    else
    {
        cout << (x/c)+1;
    }
}

#include<iostream>
using namespace std;
main()
{
    int r,g;
    cin >> r >> g;
    int min=r;
    if(g<r)
    {
        min=g;
    }
    for(int i=1;i<=min;i++)
    {
        if(r%i==0&&g%i==0)
        {
            cout << i << ' ' << r/i << ' ' << g/i << endl;
        }
    }
}
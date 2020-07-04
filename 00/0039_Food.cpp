#include<iostream>
#include<algorithm>
using namespace std;

main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    int m;
    cin >> m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin >> b[i];
    }
    sort(b,b+m);
    if(a[0]!=b[0])
    {
        for(int i=0;i<n;i++)
        {
            cout << a[i] << ' ';
        }
        cout << endl;
    }
    while(next_permutation(a,a+n))
    {
        int x=0;
        for(int i=0;i<m;i++)
        {
            if(a[0]==b[i])
            {
                x++;
            }
        }
        if(x==0)
        {
            for(int i=0;i<n;i++)
            {
                cout << a[i] << ' ';
            }
            cout << endl;
        }
    }
}


#include<iostream>
using namespace std;
main()
{
    int n;
    int m;
    int q;
    cin >> n >> m >> q;
    struct magnet
    {
        char h;
        char t;
    }a[n+1];
    int b[n+1]; //down
    int c[n+1]; //up
    for(int i=1;i<n+1;i++)
    {
        a[i].h='N';
        a[i].t='S';
        b[i]=0;
        c[i]=0;
    }
    /*
    for(int i=1;i<n+1;i++)
    {
        cout << i << ' ' << a[i].h << ' ' << a[i].t << endl;
    }
    */
    for(int i=0;i<m;i++)
    {
        int s;
        int k;
        cin >> s >> k;
        for(int j=s;j<s+k;j++)
        {
            char c=a[j].h;
            a[j].h=a[j].t;
            a[j].t=c;
        }
        /*
        for(int j=1;j<n+1;j++)
        {
            cout << j << ' ' << a[j].h << ' ' << a[j].t << endl;
        }
        */
    }
    for(int i=1;i<n+1;i++)
    {
        if(a[i].t!=a[i+1].h&&i!=n)
        {
            b[i]++;
            if(i!=1)
            {
                b[i]+=b[i-1];
            }
        }
        if(a[n-i].h!=a[n-i-1].t&&i!=1)
        {
            c[n-i]++;
            if(i!=n)
            {
                c[n-i]+=c[n-i+1];
            }
        }
    }
    for(int i=0;i<q;i++)
    {
        int d;
        cin >> d;
        int sum=0;
        if(d!=1)
        {
            sum+=b[d-1];
        }
        if(d!=n)
        {
            sum+=c[d+1];
        }
        sum++;
        cout << sum << endl;
    }
}
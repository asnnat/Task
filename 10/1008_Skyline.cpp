#include<iostream>
using namespace std;
main()
{
    struct sky
    {
        int l;
        int m;
        int r;
    }a[3002];
    for(int i=0;i<3002;i++)
    {
        a[i].l=0;
        a[i].m=0;
        a[i].r=0;
    }
    int n;
    cin >> n;
    int max=0;
    for(int i=0;i<n;i++)
    {
        int L,H,R;
        cin >> L >> H >> R;
        if(max<R)
        {
            max=R;
        }
        for(int j=L;j<=R;j++)
        {
            if(j==L)
            {
                if(a[j].m<H)
                {
                    a[j].m=H;
                }
                if(a[j].r<H)
                {
                    a[j].r=H;
                }
            }
            if(j==R)
            {
                if(a[j].l<H)
                {
                    a[j].l=H;
                }
                if(a[j].m<H)
                {
                    a[j].m=H;
                }
            }
            if(j>L&&j<R)
            {
                if(a[j].l<H)
                {
                    a[j].l=H;
                }
                if(a[j].m<H)
                {
                    a[j].m=H;
                }
                if(a[j].r<H)
                {
                    a[j].r=H;
                }
            }
        }
    }
    /*
    cout << endl;
    for(int i=0;i<max+2;i++)
    {
        cout << i << ' ' << a[i].l << ' ' << a[i].m << ' ' << a[i].r << endl;
    }
    cout << endl;
    */
    for(int i=1;i<=max;i++)
    {
        if(a[i].l==a[i].m&&a[i].m==a[i].r)
        {

        }
        else
        {
            if(a[i].l!=a[i].m)
            {
                cout << i << ' ' << a[i].m << ' ';
            }
            if(a[i].m!=a[i].r)
            {
                if(a[i].m>a[i].r)
                {
                    cout << i << ' ' ;
                }
                if(a[i].m<a[i].r)
                {
                    cout << i+1 << ' ' ;
                }
                cout << a[i].r << ' ' ;
            }
        }
    }
}
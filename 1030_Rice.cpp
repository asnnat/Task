#include<iostream>
#include<map>
#include<stdio.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    map<double,int> m;
    map<double,int>::iterator mitr;
    for(int i=0;i<n;i++)
    {
        double p;
        int q;
        cin >> p >> q;
        double r=p/q;
        m[r]+=q;
        /*
        pair<map<double,int>::iterator,bool> ret;
        ret=m.insert(pair<double,int>(r,q));
        if(ret.second==false)
        {
            m[r]+=q;
        }
        else
        {
            m.insert(pair<double,int>(r,q));
        }
        */
    }
    /*
    for(mitr=m.begin();mitr!=m.end();mitr++)
    {
        cout << mitr->first << ' ' << mitr->second << endl;
    }
    */
    int b;
    cin >> b;
    mitr=m.begin();
    for(int i=0;i<b;i++)
    {
        int a;
        cin >> a;
        double cost=0;
        while(a>0&&mitr!=m.end())
        {
            if(mitr->second>=a)
            {
                mitr->second-=a;
                cost+=a*mitr->first;
                a=0;
            }
            else
            {
                a-=mitr->second;
                cost+=mitr->second*mitr->first;
                mitr->second=0;
            }
            if(mitr->second==0)
            {
                mitr++;
            }
        }
        printf("%.3lf\n",cost);
    }
}
/*
#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    struct rice
    {
        double price;
        int kg;
    }a[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        double p;
        int q;
        scanf(" %lf %d",&p,&q);
        a[i].price=p/q;
        a[i].kg=q;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i].price>a[j].price)
            {
                double x;
                x=a[i].price;
                a[i].price=a[j].price;
                a[j].price=x;
                int y;
                y=a[i].kg;
                a[i].kg=a[j].kg;
                a[j].kg=y;
            }
        }
    }
    int m;
    scanf("%d",&m);
    int r=0;
    for(i=0;i<m;i++)
    {
        int z;
        scanf("%d",&z);
        double cost=0;
        while(z>0)
        {
            if(a[r].kg>=z)
            {
                a[r].kg-=z;
                cost+=z*a[r].price;
                z=0;
            }
            else
            {
                z-=a[r].kg;
                cost+=a[r].kg*a[r].price;
                a[r].kg=0;
            }
            if(a[r].kg==0)
            {
                r++;
            }
        }
        printf("%.3lf\n",cost);
    }
}
*/
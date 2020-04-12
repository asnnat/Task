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
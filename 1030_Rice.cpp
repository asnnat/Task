#include<iostream>
#include<map>
#include<stdio.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    map<float,float> m;
    map<float,float>::iterator mitr;
    for(int i=0;i<n;i++)
    {
        float p,q;
        cin >> p >> q;
        float r=p/q;
        pair<map<float,float>::iterator,bool> ret;
        ret=m.insert(pair<float,float>(r,q));
        if(ret.second==false)
        {
            m[r]+=q;
        }
        else
        {
            m.insert(pair<float,float>(r,q));
        }
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
        float a;
        cin >> a;
        float cost=0;
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
        printf("%.3f\n",cost);
    }
}
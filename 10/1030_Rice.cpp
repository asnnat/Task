#include<iostream>
#include<map>
using namespace std;

main()
{
    int n;
    scanf("%d", &n);
    map<double,int> m;
    for(int i=0;i<n;i++)
    {
        double p;
        double q;
        scanf("%lf %lf", &p, &q);
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
    for(int i=0;i<b;i++)
    {
        int a;
        scanf("%d", &a);
        double cost=0;
        while(a>0)
        {
            map<double,int>::iterator mitr=m.begin();
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
                m.erase(mitr);
            }
        }
        printf("%.3lf\n", cost);
    }
}
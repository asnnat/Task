#include<iostream>
#include<map>
using namespace std;
main()
{
    string s;
    cin >> s;
    map<char,int> m;
    map<char,int>::iterator mitr;
    map<char,int> mc;
    map<char,int>::iterator mcitr;
    for(int i=0;i<7;i++)
    {
        mc.insert(pair<char,int>('A'+i,0));
    }
    /*
    for(mcitr=mc.begin();mcitr!=mc.end();mcitr++)
    {
        cout << mcitr->first << ' ' << mcitr->second << endl;
    }
    */
    while(s!="!")
    {
        int l=0;
        while(s[l]!='\0')
        {
            if(mc[s[l]]==0)
            {
                m[s[l]]++;
            }
            l++;
        }
        int min=2000000000;
        int p=0;
        char q;
        if(m.size()>1)
        {
            for(mitr=m.begin();mitr!=m.end();mitr++)
            {
                if(mitr->second<min && mc[mitr->first]==0)
                {
                    min=mitr->second;
                }
            }
            for(mitr=m.begin();mitr!=m.end();mitr++)
            {
                if(mitr->second==min && mc[mitr->first]==0)
                {
                    p++;
                    q=mitr->first;
                }
            }
            
            //cout << "p = " << p << endl;
            if(p==1)
            {
                mc[q]++;
                m.erase(q);
            }
        }
        /*
        for(mitr=m.begin();mitr!=m.end();mitr++)
        {
            cout << mitr->first << ' ' << mitr->second << ' ' << mc[mitr->first] << endl;
        }
        */
        //cout << endl;
        cin >> s;
    }
    /*
    for(mitr=m.begin();mitr!=m.end();mitr++)
    {
        if(mc[mitr->first]==0)
        {
            cout << mitr->first << ' ' << mitr->second << endl;
        }
    }
    */
    cout << m.size() << endl;
    while(m.size()!=0)
    {
        int max=0;
        char c;
        for(mitr=m.begin();mitr!=m.end();mitr++)
        {
            if(max<mitr->second)
            {
                max=mitr->second;
                c=mitr->first;
            }
        }
        cout << c << ' ' << m[c] << endl;
        m.erase(c);
    }
}

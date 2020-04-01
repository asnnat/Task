#include<iostream>
#include<map>
using namespace std;
main()
{
    map<char,int> m;
    char c;
    cin >> c;
    while(c!='!')
    {
        if(c=='=')
        {
            char a;
            int b;
            cin >> a >> b;
            m[a]=b;
        }
        if(c=='+')
        {
            char a,b;
            cin >> a >> b;
            m[a]+=m[b];
        }
        if(c=='-')
        {
            char a,b;
            cin >> a >> b;
            m[a]-=m[b];
        }
        if(c=='*')
        {
            char a,b;
            cin >> a >> b;
            m[a]*=m[b];
        }
        if(c=='/')
        {
            char a,b;
            cin >> a >> b;
            m[a]/=m[b];
        }
        if(c=='#')
        {
            char a;
            cin >> a;
            cout << m[a] << endl;
        }
        /*
        cout << endl;
        map<char,float>::iterator mitr;
        for(mitr=m.begin();mitr!=m.end();mitr++)
        {
            cout << mitr->first << ' ' << mitr->second << endl;
        }
        cout << endl;
        */
        cin >> c;
    }
    cout << '!';
}
#include<iostream>
#include<map>
using namespace std;
main()
{
    int n;
    cin >> n;
    map<int, int> m;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    int a;
    cin >> a;
    unsigned long long int sum = 0;
    map<int,int>::iterator mit = m.begin();
    for(map<int,int>::iterator mitr = m.begin(); mitr != m.end(); mitr++)
    {
        map<int,int>::iterator mit = m.find(a-mitr->first);
        if(mit != m.end())
        {
            if(mitr->first == mit->first)
            {
                sum += mitr->second*(mitr->second-1)/2;
            }
            else
            {
                sum += mitr->second*mit->second;
            }
            mitr->second=0;
            mit->second=0;
        }
    }
    cout << sum;
}
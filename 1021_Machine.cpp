#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
    vector<int> v;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        char c;
        cin >> c;
        if(c=='P')
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        else
        {
            if(v.size()==0)
            {
                cout << "-1" << endl;
            }
            else
            {
                make_heap(v.begin(),v.end());
                cout << v.front() << endl;
                pop_heap(v.begin(),v.end());
                v.pop_back();
            }
        }
    }
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0 ; i < n ;i++)
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
                cout << -1;
            }
            else
            {
                sort(v.begin(),v.end());
                cout << v.back();
                v.pop_back();
            }
            cout << endl;
        }
    }
}
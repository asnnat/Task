#include<iostream>
#include<cmath>
using namespace std;
main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        long double x;
        cin >> x;
        long double y=pow(2,x);
        cout.setf(ios::fixed);
        cout.precision(0);
        cout << y << endl;
    }
}

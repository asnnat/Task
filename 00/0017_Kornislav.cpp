#include<iostream>
using namespace std;
main()
{
    int a[4];
    for(int i=0;i<4;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout << a[0]*a[2];
}

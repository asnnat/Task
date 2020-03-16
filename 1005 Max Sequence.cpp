#include<iostream>
using namespace std;

main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int maxb=0;
    int s,f;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        b[i]=0;
        b[i]+=a[i];
        if(i>0)
        {
            b[i]+=b[i-1];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(b[i]>maxb)
        {
            maxb=i;
            s=i;
            f=i;
        }
        for(int j=i+1;j<n;j++)
        {
            if(b[j]-b[i]>maxb)
            {
                maxb=b[j]-b[i];
                s=i;
                f=j;
            }
        }
    }
    if(maxb>0)
    {
        for(int i=s+1;i<=f;i++)
        {
            cout << a[i] << ' ';
        }
        cout << endl;
        cout << maxb;
    }
    else
    {
        cout << "Empty sequence";
    }
}

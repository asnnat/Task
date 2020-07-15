#include<iostream>
using namespace std;
main()
{
    int n;
    cin >> n;
    int a[n][n];
    int x[n];
    int y[n];
    int z[n*n+1];
    int ans=0;
    for(int i=0;i<n*n+1;i++)
    {
        z[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        x[i]=0;
        y[i]=0;
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
            if(z[a[i][j]]!=0)
            {
                ans=n*n;
            }
            z[a[i][j]]++;
        }
    }
    int p=0;
    int q=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            x[j]+=a[i][j];
            y[i]+=a[i][j];
            if(i==j)
            {
                p+=a[i][j];
            }
            if(j==n-1-i)
            {
                q+=a[i][j];
            }
        }
    }
    int sum=x[0];
    /*
    for(int i=0;i<n;i++)
    {
        cout << x[i] << ' ' << y[i] << endl;
    }
    cout << p << ' ' << q << ' ' << sum;
    */
    for(int i=0;i<n;i++)
    {
        if(x[i]==y[i]&&x[i]==sum&&y[i]==sum&&p==sum&&q==sum)
        {
            ans++;
        }
    }
    if(ans==n)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    
}
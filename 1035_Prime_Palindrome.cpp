#include<iostream>
using namespace std;

int sum;
void Palin(unsigned int x)
{
    int a[20];
    int l=0;
    while(x!=0)
    {
        a[l]=x%10;
        x/=10;
        l++;
    }
    for(int i=0;i<l/2;i++)
    {
        if(a[i]!=a[l-i-1])
        {
            return ;
        }
    }
    sum++;
}

void Prime(unsigned int x)
{
    int y=0;
    for(int i=2;i<=x;i++)
    {
        if(x%i==0)
        {
            y++;
        }
        if(y>1)
        {
            return ;
        }
    }
    if(y==1)
    {
        sum++;
    }
}

main()
{
    unsigned int n;
    cin >> n;
    int check=0;
    while(check==0)
    {
        sum=0;
        Palin(n);
        if(sum==1)
        {
            Prime(n);
        }
        if(sum==2)
        {
            check++;
            cout << n;
        }
        n++;
    }
}
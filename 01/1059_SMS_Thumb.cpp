#include<iostream>
#include<vector>
using namespace std;

vector<char> v;

void func(int x,int y,int m)
{
    if(x==0&&y==0)
    {
        while(v.size()>0&&m>0)
        {
            v.pop_back();
            m--;
        }
        return ;
    }
    if(x==1&&y==0)
    {
        switch(m%3)
        {
            case 1 : v.push_back('A'); break;
            case 2 : v.push_back('B'); break;
            case 0 : v.push_back('C'); break;
        }
        return ;
    }
    if(x==2&&y==0)
    {
        switch(m%3)
        {
            case 1 : v.push_back('D'); break;
            case 2 : v.push_back('E'); break;
            case 0 : v.push_back('F'); break;
        }
        return ;
    }
    if(x==0&&y==1)
    {
        switch(m%3)
        {
            case 1 : v.push_back('G'); break;
            case 2 : v.push_back('H'); break;
            case 0 : v.push_back('I'); break;
        }
        return ;
    }
    if(x==1&&y==1)
    {
        switch(m%3)
        {
            case 1 : v.push_back('J'); break;
            case 2 : v.push_back('K'); break;
            case 0 : v.push_back('L'); break;
        }
        return ;
    }
    if(x==2&&y==1)
    {
        switch(m%3)
        {
            case 1 : v.push_back('M'); break;
            case 2 : v.push_back('N'); break;
            case 0 : v.push_back('O'); break;
        }
        return ;
    }
    if(x==0&&y==2)
    {
        switch(m%4)
        {
            case 1 : v.push_back('P'); break;
            case 2 : v.push_back('Q'); break;
            case 3 : v.push_back('R'); break;
            case 0 : v.push_back('S'); break;
        }
        return ;
    }
    if(x==1&&y==2)
    {
        switch(m%3)
        {
            case 1 : v.push_back('T'); break;
            case 2 : v.push_back('U'); break;
            case 0 : v.push_back('V'); break;
        }
        return ;
    }
    if(x==2&&y==2)
    {
        switch(m%4)
        {
            case 1 : v.push_back('W'); break;
            case 2 : v.push_back('X'); break;
            case 3 : v.push_back('Y'); break;
            case 0 : v.push_back('Z'); break;
        }
        return ;
    }
}

main()
{
    int n;
    cin >> n;
    int x,y,z;
    cin >> z;
    switch(z)
    {
        case 1 : x=0; y=0; break;
        case 2 : x=1; y=0; break;
        case 3 : x=2; y=0; break;
        case 4 : x=0; y=1; break;
        case 5 : x=1; y=1; break;
        case 6 : x=2; y=1; break;
        case 7 : x=0; y=2; break;
        case 8 : x=1; y=2; break;
        case 9 : x=2; y=2; break;
    }
    int m;
    cin >> m;
    func(x,y,m);
    for(int i=0;i<n-1;i++)
    {
        int p,q;
        cin >> p >> q >> m;
        x+=p;
        y+=q;
        func(x,y,m);
    }
    if(v.size()==0)
    {
        cout << "null";
    }
    for(vector<char>::iterator vitr=v.begin();vitr!=v.end();vitr++)
    {
        cout << *vitr;
    }
}

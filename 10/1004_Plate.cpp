#include<iostream>
#include<list>
using namespace std;
main()
{
    list<int> lstu;
    list<int> lcla;
    int cla, stu;
    cin >> cla >> stu;
    int a[stu][2];
    for(int i=0;i<stu;i++)
    {
        cin >> a[i][0] >> a[i][1];
    }

    char x;
    cin >> x;
    while(x!='X')
    {
        list<int>::iterator itr;
        list<int>::iterator checkcla;
        if(x=='E')
        {
            int y;
            cin >> y;
            int z;
            for(int i=0;i<stu;i++)
            {
                if(a[i][1]==y)
                {
                    z=a[i][0];
                }
            }
            if(lstu.empty()||lstu.size()==1)
            {
                lstu.push_back(y);
                lcla.push_back(z);
            }
            else
            {
                itr=lcla.begin();
                checkcla=lcla.end();
                while(itr!=lcla.end())
                {
                    if(*itr==z)
                    {
                        checkcla=itr;
                    }
                    itr++;
                }
                if(checkcla==lcla.end()||checkcla==itr--)
                {
                    lstu.push_back(y);
                    lcla.push_back(z);
                }
                else
                {
                    list<int>::iterator checkstu=lstu.begin();
                    for(itr=lcla.begin();itr!=checkcla;itr++)
                    {
                        checkstu++;
                    }
                    checkstu++;
                    lstu.insert(checkstu++,y);
                    lcla.insert(checkcla++,z);
                }
            }
        }
        else if(x=='D')
        {
            if(!lstu.empty())
            {
                cout << lstu.front() << endl;
                lstu.pop_front();
                lcla.pop_front();
            }
            else
            {
                cout << "empty" << endl;
            }
        }
        /*
        cout << "ALL STU : ";
        itr=lstu.begin();
        while(itr!=lstu.end())
        {
            cout << *itr << ' ';
            itr++;
        }
        cout << endl;
        cout << "ALL CLA : ";
        itr=lcla.begin();
        while(itr!=lcla.end())
        {
            cout << *itr << ' ';
            itr++;
        }
        cout << endl << endl;
        */
        cin >> x;
    }
    cout << 0;
}

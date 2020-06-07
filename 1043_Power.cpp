#include<iostream>
#include<map>
using namespace std;
main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        map<int, int> m;
        m[2] = 0;
        map<int, int>::iterator mitr;
        //int x=0;
        while(num != 1)
        {
            mitr = m.end();
            mitr--;
            for(int j = mitr->first; j <= num; j++)
            {
                if(num % j == 0)
                {
                    //cout << j << ' ';
                    num /= j;
                    m[j]++;
                    j = num+1;
                }
                ///x++;
            }
        }
        //cout << endl;
        //cout << "x = " << x << endl;
        if(m[2] == 0)
        {
            m.erase(2);
        }

        mitr = m.begin();
        int temp = mitr->second;
        int count = 0;
        while(mitr != m.end() && mitr->second == temp)
        {
            count++;
            mitr++;
        }
        //cout << count << ' ' << m.size() << ' ';
        if(count == m.size() && temp != 1)
        {
            cout << temp;
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
}
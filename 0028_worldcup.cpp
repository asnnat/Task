#include<iostream>
#include<string>
using namespace std;
main()
{
    struct worldcup
    {
        string name;
        int score=0;
        int get=0;
        int loss=0;
        int allgoal;
    }a[4];
    for(int i=0;i<4;i++)
    {
        cin >> a[i].name;
    }
    int b[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin >> b[i][j];
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i!=j)
            {
                a[i].get+=b[i][j];
                a[i].loss+=b[j][i];
                if(b[i][j]>b[j][i])
                {
                    a[i].score+=3;
                }
                else if(b[i][j]==b[j][i])
                {
                    a[i].score+=1;
                    a[j].score+=1;
                }
                else
                {
                    a[j].score+=3;
                }
            }
        }
    }
    for(int i=0;i<4;i++)
    {
        a[i].allgoal=a[i].get-a[i].loss;
        a[i].score/=2;
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i].score>a[j].score)
            {
                int x;
                x=a[i].score;
                a[i].score=a[j].score;
                a[j].score=x;
                string y=a[i].name;
                a[i].name=a[j].name;
                a[j].name=y;
                x=a[i].get;
                a[i].get=a[j].get;
                a[j].get=x;
                x=a[i].loss;
                a[i].loss=a[j].loss;
                a[j].loss=x;
                x=a[i].allgoal;
                a[i].allgoal=a[j].allgoal;
                a[j].allgoal=x;
            }
            else if(a[i].score==a[j].score)
            {
                if(a[i].allgoal>a[j].allgoal)
                {
                    int x;
                    x=a[i].score;
                    a[i].score=a[j].score;
                    a[j].score=x;
                    string y=a[i].name;
                    a[i].name=a[j].name;
                    a[j].name=y;
                    x=a[i].get;
                    a[i].get=a[j].get;
                    a[j].get=x;
                    x=a[i].loss;
                    a[i].loss=a[j].loss;
                    a[j].loss=x;
                    x=a[i].allgoal;
                    a[i].allgoal=a[j].allgoal;
                    a[j].allgoal=x;
                }
                else if(a[i].allgoal==a[j].allgoal)
                {
                    if(a[i].get>a[j].get)
                    {
                        int x;
                        x=a[i].score;
                        a[i].score=a[j].score;
                        a[j].score=x;
                        string y=a[i].name;
                        a[i].name=a[j].name;
                        a[j].name=y;
                        x=a[i].get;
                        a[i].get=a[j].get;
                        a[j].get=x;
                        x=a[i].loss;
                        a[i].loss=a[j].loss;
                        a[j].loss=x;
                        x=a[i].allgoal;
                        a[i].allgoal=a[j].allgoal;
                        a[j].allgoal=x;
                    }
                }
            }
        }
    }
    /*
    for(int i=0;i<4;i++)
    {
        cout << a[i].name << endl;
        cout << a[i].score << endl;
        cout << a[i].get << ' ' << a[i].loss << ' ' << a[i].allgoal << endl;
    }
    */
    for(int i=0;i<4;i++)
    {
        cout << a[i].name << ' ' << a[i].score << endl;
    }
}


#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
    string s;
    cin >> s;
    double x=0;
    double y=0;
    while(s!="*")
    {
        double sum=0;
        for(int i=0;i<5;i++)
        {
            if(s[i]==' ')
            {
                break;
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                sum*=10;
                sum+=s[i]-'0';
            }
            else
            {
                if(s[i]=='N')
                {
                    if(s[i+1]=='\0')
                    {
                        y+=sum;
                    }
                    else if(s[i+1]=='E')
                    {
                        y+=sum/sqrt(2);
                        x+=sum/sqrt(2);
                    }
                    else
                    {
                        y+=sum/sqrt(2);
                        x-=sum/sqrt(2);
                    }
                }
                if(s[i]=='S')
                {
                    if(s[i+1]=='\0')
                    {
                        y-=sum;
                    }
                    else if(s[i+1]=='E')
                    {
                        y-=sum/sqrt(2);
                        x+=sum/sqrt(2);
                    }
                    else
                    {
                        y-=sum/sqrt(2);
                        x-=sum/sqrt(2);
                    }
                }
                if(s[i]=='E')
                {
                    x+=sum;
                }
                if(s[i]=='W')
                {
                    x-=sum;
                }
                break;
            }    
        }
        //cout << sum << endl;
        cin >> s;
    }
    double d=sqrtf(pow(x,2)+pow(y,2));
    printf("%.3lf %.3lf\n",x,y);
    printf("%.3lf",d);
}
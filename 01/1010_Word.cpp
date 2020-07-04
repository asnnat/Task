#include<iostream>
using namespace std;
main()
{
    int y,x;
    cin >> y >> x;
    char a[y][x];
    for(int i=0;i<y;i++)
    {
        for(int j=0;j<x;j++)
        {
            cin >> a[i][j];
            if(a[i][j]>='a'&&a[i][j]<='z')
            {
                a[i][j]-='a'-'A';
            }
        }
    }
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        char b[16];
        cin >> b;
        int lb=0;
        while(b[lb]!='\0')
        {
            if(b[lb]>='a'&&b[lb]<='z')
            {
                b[lb]-='a'-'A';
            }
            lb++;
        }
        int z=0;
        for(int j=0;j<y;j++)
        {
            for(int k=0;k<x;k++)
            {
                if(j+lb<=y&&z==0) // Down straight
                {
                    int check=0;
                    for(int l=0;l<lb;l++)
                    {
                        if(a[j+l][k]==b[l])
                        {
                            check++;
                        }
                        else
                        {
                            break ;
                        }
                    }
                    if(check==lb)
                    {
                        cout << j << ' ' << k << endl;
                        z++;
                        k=x;
                        j=y;
                    }
                }
                if(j+lb<=y&&k+lb<=x&&z==0) // Down oblique L->R
                {
                    int check=0;
                    for(int l=0;l<lb;l++)
                    {
                        if(a[j+l][k+l]==b[l])
                        {
                            check++;
                        }
                        else
                        {
                            break ;
                        }
                    }
                    if(check==lb)
                    {
                        cout << j << ' ' << k << endl;
                        z++;
                        k=x;
                        j=y;
                    }
                }
                if(j+lb<=y&&k>=lb-1&&z==0) // Down oblique L<-R
                {
                    int check=0;
                    for(int l=0;l<lb;l++)
                    {
                        if(a[j+l][k-l]==b[l])
                        {
                            check++;
                        }
                        else
                        {
                            break ;
                        }
                    }
                    if(check==lb)
                    {
                        cout << j << ' ' << k << endl;
                        z++;
                        k=x;
                        j=y;
                    }
                }
                if(j>=lb-1&&z==0) // Up straight
                {
                    int check=0;
                    for(int l=0;l<lb;l++)
                    {
                        if(a[j-l][k]==b[l])
                        {
                            check++;
                        }
                        else
                        {
                            break ;
                        }
                    }
                    if(check==lb)
                    {
                        cout << j << ' ' << k << endl;
                        z++;
                        k=x;
                        j=y;
                    }
                }
                if(j>=lb-1&&k+lb<=x&&z==0) // Up oblique L->R
                {
                    int check=0;
                    for(int l=0;l<lb;l++)
                    {
                        if(a[j-l][k+l]==b[l])
                        {
                            check++;
                        }
                        else
                        {
                            break ;
                        }
                    }
                    if(check==lb)
                    {
                        cout << j << ' ' << k << endl;
                        z++;
                        k=x;
                        j=y;
                    }
                }
                if(j>=lb-1&&k>=lb-1&&z==0) // Up oblique L<-R
                {
                    int check=0;
                    for(int l=0;l<lb;l++)
                    {
                        if(a[j-l][k-l]==b[l])
                        {
                            check++;
                        }
                        else
                        {
                            break ;
                        }
                    }
                    if(check==lb)
                    {
                        cout << j << ' ' << k << endl;
                        z++;
                        k=x;
                        j=y;
                    }
                }
                if(k+lb<=x&&z==0) // L->R
                {
                    int check=0;
                    for(int l=0;l<lb;l++)
                    {
                        if(a[j][k+l]==b[l])
                        {
                            check++;
                        }
                        else
                        {
                            break ;
                        }
                    }
                    if(check==lb)
                    {
                        cout << j << ' ' << k << endl;
                        z++;
                        k=x;
                        j=y;
                    }
                }
                if(k>=lb-1&&z==0) // L<-R
                {
                    int check=0;
                    for(int l=0;l<lb;l++)
                    {
                        if(a[j][k-l]==b[l])
                        {
                            check++;
                        }
                        else
                        {
                            break ;
                        }
                    }
                    if(check==lb)
                    {
                        cout << j << ' ' << k << endl;
                        z++;
                        k=x;
                        j=y;
                    }
                }
            }
        }
    }
}
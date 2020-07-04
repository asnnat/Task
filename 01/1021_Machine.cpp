#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
    int num;
    scanf("%d", &num);
    vector<int> v;
    for(int i = 0; i < num; i++)
    {
        char order;
        scanf(" %c", &order);
        if(order == 'P')
        {
            int temp;
            scanf("%d", &temp);
            v.push_back(temp);
        }
        else
        {
            if(v.size() == 0)
            {
                printf("-1\n");
            }
            else
            {
                sort(v.begin(), v.end());
                printf("%d\n",v.back());
                v.pop_back();
            }
        }
    }
}
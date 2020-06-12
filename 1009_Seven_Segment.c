#include<stdio.h>
#include<string.h>
#include<math.h>

int num1, num2;
char a[3][1000];
char b[3][1000];
int i, j;
unsigned long long int sum = 0;

void CheckA(int i, int num, int position)
{
    //printf("%d ",i);
    unsigned long long int temp;
    if(a[1][i] == '_')
    {
        if(a[0][i] == '_')
        {
            if(a[1][i-1] == '|')
            {
                if(a[1][i+1] == '|')
                {
                    if(a[2][i-1] == '|')
                    {
                        temp = 8;
                    }
                    else
                    {
                        temp = 9;
                    }
                }
                else
                {
                    if(a[2][i-1] == '|')
                    {
                        temp = 6;
                    }
                    else
                    {
                        temp = 5;
                    }
                }
            }
            else
            {
                if(a[2][i+1] == '|')
                {
                    temp = 3;
                }
                else
                {
                    temp = 2;
                }
            }
        }
        else
        {
            temp = 4;
        }
    }
    else
    {
        if(a[0][i] == '_')
        {
            if(a[2][i] == '_')
            {
                temp = 0;
            }
            else
            {
                temp = 7;
            }
        }
        else
        {
            temp = 1;
        }
        
    }
    sum += temp * pow(10, num-position-1);
    //printf("%llu\n", temp);
}

void CheckB(int i, int num, int position)
{
    //printf("%d ",i);
    unsigned long long int temp;
    if(b[1][i] == '_')
    {
        if(b[0][i] == '_')
        {
            if(b[1][i-1] == '|')
            {
                if(b[1][i+1] == '|')
                {
                    if(b[2][i-1] == '|')
                    {
                        temp = 8;
                    }
                    else
                    {
                        temp = 9;
                    }
                }
                else
                {
                    if(b[2][i-1] == '|')
                    {
                        temp = 6;
                    }
                    else
                    {
                        temp = 5;
                    }
                }
            }
            else
            {
                if(b[2][i+1] == '|')
                {
                    temp = 3;
                }
                else
                {
                    temp = 2;
                }
            }
        }
        else
        {
            temp = 4;
        }
    }
    else
    {
        if(b[0][i] == '_')
        {
            if(b[2][i] == '_')
            {
                temp = 0;
            }
            else
            {
                temp = 7;
            }
        }
        else
        {
            temp = 1;
        }
        
    }
    sum += temp * pow(10, num-position-1);
    //printf("%llu\n", temp);
}

main()
{
    scanf("%d %d", &num1, &num2);
    getchar();
    for(i = 0; i < 3; i++)
    {
        gets(a[i]);
    }
    int count = 0;
    for(i = 0; i < num1; i++)
    {
        CheckA(1+(i*3)+count, num1, i);
        count++;
    }
    for(i = 0; i < 3; i++)
    {
        gets(b[i]);
    }
    count = 0;
    for(i = 0; i < num2; i++)
    {
        CheckB(1+(i*3)+count, num2, i);
        count++;
    }
    printf("%llu",sum);

}

#include<stdio.h>
main()
{
    int size;
    scanf("%d", &size);
    int table[size][size];
    int num;
    scanf("%d", &num);
    struct conquerer
    {
        int point;
        int step[num];
        int x;
        int y;
    }array[5];
    int i, j, k, l;
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            table[i][j] = 0;
        }
    }
    table[0][0] = 4;
    array[4].x = 0;
    array[4].y = 0;
    table[0][size-1] = 1;
    array[1].x = size-1;
    array[1].y = 0;
    table[size-1][0] = 3;
    array[3].x = 0;
    array[3].y = size-1;
    table[size-1][size-1] = 2;
    array[2].x = size-1;
    array[2].y = size-1;
    for(i = 1; i <= 4; i++)
    {
        array[i].point = 1;
        for(j = 0; j < num; j++)
        {
            scanf(" %c", &array[i].step[j]);
        }
    }
    for(i = 0; i < num; i++)
    {
        for(j = 1; j <= 4; j++)
        {
            char c = array[j].step[i];
            int x = array[j].x;
            int y = array[j].y;
            int check = 0;
            if(c == 'N')
            {
                if(y-1 >= 0)
                {
                    for(k = 1; k <= 4; k++)
                    {
                        if(k != j)
                        {
                            if(x == array[k].x && y-1 == array[k].y)
                            {
                                check++;
                            }
                        }
                    }
                    if(check == 0)
                    {
                        array[table[y-1][x]].point--;
                        table[y-1][x] = j;
                        array[j].point++;
                        array[j].y--;
                    }
                }
            }
            else if(c == 'S')
            {
                if(y+1 < size)
                {
                    for(k = 1; k <= 4; k++)
                    {
                        if(k != j)
                        {
                            if(x == array[k].x && y+1 == array[k].y)
                            {
                                check++;
                            }
                        }
                    }
                    if(check == 0)
                    {
                        array[table[y+1][x]].point--;
                        table[y+1][x] = j;
                        array[j].point++;
                        array[j].y++;   
                    }
                }
            }
            else if(c == 'W')
            {
                if(x-1 >= 0)
                {
                    for(k = 1; k <= 4; k++)
                    {
                        if(k != j)
                        {
                            if(x-1 == array[k].x && y == array[k].y)
                            {
                                check++;
                            }
                        }
                    }
                    if(check == 0)
                    {
                        array[table[y][x-1]].point--;
                        table[y][x-1] = j;
                        array[j].point++;
                        array[j].x--;
                    }
                }
            }
            else
            {
                if(x+1 < size)
                {
                    for(k = 1; k <= 4; k++)
                    {
                        if(k != j)
                        {
                            if(x+1 == array[k].x && y == array[k].y)
                            {
                                check++;
                            }
                        }
                    }
                    if(check == 0)
                    {
                        array[table[y][x+1]].point--;
                        table[y][x+1] = j;
                        array[j].point++;
                        array[j].x++;
                    }
                }
            }
            /*
            for(k = 0; k < size; k++)
            {
                for(l = 0; l < size; l++)
                {
                    printf("%d ",table[k][l]);
                }
                printf("\n");
            }
            printf("x = %d\n", array[j].x);
            printf("y = %d\n", array[j].y); 
            printf("fail = %d\n", fail);
            for(k = 1; k <= 4; k++)
            {
                printf("%d %d\n", k, array[k].point);
            }
            printf("\n");
            */
        }
    }
    int max = 0;
    int temp = 0;
    int sum = 0;
    for(i = 1; i <= 4; i++)
    {
        sum += array[i].point;
        if(array[i].point > max)
        {
            max = array[i].point;
        }
    }
    if(sum != size*size)
    {
        printf("No");
    }
    else
    {
        for(i = 1; i <= 4; i++)
        {
            if(array[i].point == max)
            {
                temp++;
            }
        }
        printf("%d %d\n", temp, max);
        for(i = 1; i <= 4; i++)
        {
            if(array[i].point == max)
            {
                printf("%d\n", i);
            }
        }
    }
}
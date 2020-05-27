#include<stdio.h>

char reversi[10][10];
int i, j, k;
int ans[2] = {'x', 'O'};

void SetArray()
{
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            reversi[i][j] = '.';
        }
    }
    reversi[4][4] = 'O';
    reversi[4][5] = 'X';
    reversi[5][4] = 'X';
    reversi[5][5] = 'O';
}

int CheckDown(int x, int y, char z)
{
    if(x >= 10 && y >=10 && x <= 0 && y <= 0 || reversi[y][x] == '.')
    {
        return 0;
    }
    if(reversi[y][x] != z)
    {
        CheckDown(x, y-1, z);
    }
    else
    {
        return 1;
    }
}

int CheckUp(int x, int y, char z)
{
    if(x >= 10 && y >=10 && x <= 0 && y <= 0 || reversi[y][x] == '.')
    {
        return 0;
    }
    if(reversi[y][x] != z)
    {
        CheckUp(x, y+1, z);
    }
    else
    {
        return 1;
    }
}

int CheckLeft(int x, int y, char z)
{
    if(x >= 10 && y >=10 && x <= 0 && y <= 0 || reversi[y][x] == '.')
    {
        return 0;
    }
    if(reversi[y][x] != z)
    {
        CheckLeft(x-1, y, z);
    }
    else
    {
        return 1;
    }
}

int CheckRight(int x, int y, char z)
{
    if(x >= 10 && y >=10 && x <= 0 && y <= 0 || reversi[y][x] == '.')
    {
        return 0;
    }
    if(reversi[y][x] != z)
    {
        CheckRight(x+1, y, z);
    }
    else
    {
        return 1;
    }
}

int CheckDownRightOblique(int x, int y, char z)
{
    if(x >= 10 && y >=10 && x <= 0 && y <= 0 || reversi[y][x] == '.')
    {
        return 0;
    }
    if(reversi[y][x] != z)
    {
        CheckDownRightOblique(x+1, y-1, z);
    }
    else
    {
        return 1;
    }
}

int CheckUpRightOblique(int x, int y, char z)
{
    if(x >= 10 && y >=10 && x <= 0 && y <= 0 || reversi[y][x] == '.')
    {
        return 0;
    }
    if(reversi[y][x] != z)
    {
        CheckUpRightOblique(x+1, y+1, z);
    }
    else
    {
        return 1;
    }
}

int CheckDownLeftOblique(int x, int y, char z)
{
    if(x >= 10 && y >=10 && x <= 0 && y <= 0 || reversi[y][x] == '.')
    {
        return 0;
    }
    if(reversi[y][x] != z)
    {
        CheckDownLeftOblique(x-1, y-1, z);
    }
    else
    {
        return 1;
    }
}

int CheckUpLeftOblique(int x, int y, char z)
{
    if(x >= 10 && y >=10 && x <= 0 && y <= 0 || reversi[y][x] == '.')
    {
        return 0;
    }
    if(reversi[y][x] != z)
    {
        CheckUpLeftOblique(x-1, y+1, z);
    }
    else
    {
        return 1;
    }
}

void PrintArray()
{
    for(i = 1; i < 9; i++)
    {
        for(j = 1; j < 9; j++)
        {
            printf("%c", reversi[i][j]);
        }
        printf("\n");
    }
}

main()
{
    int num;
    scanf("%d", &num);
    SetArray();
    int count = 0;
    for(i = 0; i < num; i++)
    {
        char column;
        int row;
        scanf(" %c%d", &column, &row);
        column = column-'a'+'b'-'a';
        char new = ans[count%2];

        int temp = 0;
        if(CheckUp(column, row, new) == 1)
            temp++;
        if(CheckDown(column, row, new) == 1)
            temp++;
        if(CheckLeft(column, row, new) == 1)
            temp++;
        if(CheckRight(column, row, new) == 1)
            temp++;
        if(CheckUpLeftOblique(column, row, new) == 1)
            temp++;
        if(CheckUpRightOblique(column, row, new) == 1)
            temp++;
        if(CheckDownLeftOblique(column, row, new) == 1)
            temp++;
        if(CheckDownRightOblique(column, row, new) == 1)
            temp++;
        if(temp == 0)
        {
            count++;
        }
        reversi[row][column] = new;
    }
    PrintArray();
}
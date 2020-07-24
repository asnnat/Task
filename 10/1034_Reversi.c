#include<stdio.h>

char reversi[8][8];
int i, j, k;
int num;

void set_reversi()
{
    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            reversi[i][j] = '.';
        }
    }
    reversi[3][3] = 'O';
    reversi[4][4] = 'O';
    reversi[3][4] = 'X';
    reversi[4][3] = 'X';
}

void print_reversi()
{
    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            printf("%c",reversi[i][j]);
        }
        printf("\n");
    }
}

void check_left(int x, int y, char z)
{
    for(i = x+1; i < 8; i++)
    {
        if(reversi[y][i] == '.')
        {
            break;
        }
        if(reversi[y][i] == z)
        {
            printf("LEFT\n");
            for(j = i-1; j > x; j--)
            {
                reversi[y][j] = z;
            }
            break;
        }
    }
}

void check_right(int x, int y, char z)
{
    for(i = x-1; i >= 0; i--)
    {
        if(reversi[y][i] == '.')
        {
            break;
        }
        if(reversi[y][i] == z)
        {
            printf("RIGHT\n");
            for(j = i+1; j < x; j++)
            {
                reversi[y][j] = z;
            }
            break;
        }
    }
}

void check_up(int x, int y, char z)
{
    for(i = y+1; i < 8; i++)
    {
        if(reversi[i][x] == '.')
        {
            break;
        }
        if(reversi[i][x] == z)
        {
            printf("UP\n");
            for(j = i-1; j > y; j--)
            {
                reversi[j][x] = z;
            }
            break;
        }
    }
}

void check_down(int x, int y, char z)
{
    for(i = y-1; i >= 0; i--)
    {
        if(reversi[i][x] == '.')
        {
            break;
        }
        if(reversi[i][x] == z)
        {
            printf("DOWN\n");
            for(j = i+1; j < y; j++)
            {
                reversi[j][x] = z;
            }
            break;
        }
    }
}

void check_left_up(int x,int y, char z)
{
    for(i = 1; y+i < 8 && x+i < 8; i++)
    {
        if(reversi[y+i][x+i] == '.')
        {
            break;
        }
        if(reversi[y+i][x+i] == z)
        {
            for(j = i-1; j > y; j--)
            {
                reversi[y-i+j][x-i+j] = z;
            }
            break;
        }
    }
}

void check_left_down(int x,int y, char z)
{
    for(i = 1; i < 8 && y+i < 8 && x-i >= 0; i++)
    {
        if(reversi[y+i][x-i] == '.')
        {
            return ;
        }
        else if(reversi[y+i][x-i] != z)
        {

        }
        else
        {
            for(j = i; j < y; j++)
            {
                reversi[y+i-j][x-i+j] = z;
            }
            return ;
        }
    }
}

void check_right_up(int x,int y, char z)
{
    for(i = 1; i < 8 && y-i >= 0 && x+i < 8; i++)
    {
        if(reversi[y-i][x+i] == '.')
        {
            return ;
        }
        else if(reversi[y-i][x+i] != z)
        {

        }
        else
        {
            for(j = i; j < y; j++)
            {
                reversi[y-i+j][x+i-j] = z;
            }
            return ;
        }
    }
}

void check_right_down(int x,int y, char z)
{
    for(i = 1; i < 8 && y+i < 8 && x+i < 8; i++)
    {
        if(reversi[y+i][x+i] == '.')
        {
            return ;
        }
        else if(reversi[y+i][x+i] != z)
        {

        }
        else
        {
            for(j = i; j < y; j++)
            {
                reversi[y+i-j][x+i-j] = z;
            }
            return ;
        }
    }
}

void check_black(int x, int y, char z)
{
    reversi[y][x] = z;
    check_left(x, y, z);
    check_right(x, y, z);
    check_up(x, y, z);
    check_down(x, y, z);
    check_left_up(x, y, z);
    /*check_left_down(x, y, z);
    check_right_up(x, y, z);
    check_right_down(x, y, z);
    */
}

void check_white(int x, int y, char z)
{
    reversi[y][x] = z;
    check_left(x, y, z);
    check_right(x, y, z);
    check_up(x, y, z);
    check_down(x, y, z);
    check_left_up(x, y, z);
    /*check_left_down(x, y, z);
    check_right_up(x, y, z);
    check_right_down(x, y, z);
    */
}

void scan_input()
{
    scanf(" %d", &num);
    print_reversi();
    for(k = 0; k < num; k++)
    {
        char column;
        int row;
        scanf(" %c %d", &column, &row);
        int p = column-'a';
        int q = row-1;
        if(k%2 == 0) // BLACK X
        {
            check_black(p, q, 'X');
        }
        else // WHITE O
        {
            check_white(p, q, 'O');
        }
        print_reversi();
        printf("\n");
    }
}

main()
{
    set_reversi();
    scan_input();
    print_reversi();
}
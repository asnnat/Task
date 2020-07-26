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

void check(int x, int y, char z)
{
    // on left
    for(i = x+1; i < 8; i++)
    {
        if(reversi[y][i] == '.')
        {
            i = 8;
        }
        if(reversi[y][i] == z)
        {
            //printf("LEFT\n");
            for(j = i-1; j > x; j--)
            {
                reversi[y][j] = z;
            }
            i = 8;
        }
    }
    // on right
    for(i = x-1; i >= 0; i--)
    {
        if(reversi[y][i] == '.')
        {
            i = -1;
        }
        if(reversi[y][i] == z)
        {
            //printf("RIGHT\n");
            for(j = i+1; j < x; j++)
            {
                reversi[y][j] = z;
            }
            i = -1;
        }
    }
    // over
    for(i = y+1; i < 8; i++)
    {
        if(reversi[i][x] == '.')
        {
            i = 8;
        }
        if(reversi[i][x] == z)
        {
            //printf("UP\n");
            for(j = i-1; j > y; j--)
            {
                reversi[j][x] = z;
            }
            i = 8;
        }
    }
    // under
    for(i = y-1; i >= 0; i--)
    {
        if(reversi[i][x] == '.')
        {
            i = -1;
        }
        if(reversi[i][x] == z)
        {
            //printf("DOWN\n");
            for(j = i+1; j < y; j++)
            {
                reversi[j][x] = z;
            }
            i = -1;
        }
    }
    // on left over
    for(i = 1; y+i < 8 && x+i < 8; i++)
    {
        if(reversi[y+i][x+i] == '.')
        {
            i = 8;
        }
        if(reversi[y+i][x+i] == z)
        {
            //printf("LEFT_OVER\n");
            for(j = 1; j < i; j++)
            {
                reversi[y+j][x+j] = z;
            }
            i = 8;
        }
    }
    // on left under
    for(i = 1; y-i >= 0 && x+i < 8; i++)
    {
        if(reversi[y-i][x+i] == '.')
        {
            i = 8;
        }
        if(reversi[y-i][x+i] == z)
        {
            //printf("LEFT_UNDER\n");
            for(j = 1; j < i; j++)
            {
                reversi[y-j][x+j] = z;
            }
            i = 8;
        }
    }
    // on right over
    for(i = 1; y+i < 8 && x-i >= 0; i++)
    {
        if(reversi[y+i][x-i] == '.')
        {
            i = 8;
        }
        if(reversi[y+i][x-i] == z)
        {
            //printf("RIGHT_OVER\n");
            for(j = 1; j < i; j++)
            {
                reversi[y+j][x-j] = z;
            }
            i = 8;
        }
    }
    // on right under
    for(i = 1; y-i >= 0 && x-i >= 0; i++)
    {
        if(reversi[y-i][x-i] == '.')
        {
            i = 8;
        }
        if(reversi[y-i][x-i] == z)
        {
            //printf("RIGHT_UNDER\n");
            for(j = 1; j < i; j++)
            {
                reversi[y-j][x-j] = z;
            }
            i = 8;
        }
    }
}

void scan_input()
{
    scanf(" %d", &num);
    //print_reversi();
    for(k = 0; k < num; k++)
    {
        char column;
        int row;
        scanf(" %c %d", &column, &row);
        int p = column-'a';
        int q = row-1;
        if(k%2 == 0) // BLACK X
        {
            reversi[q][p] = 'X';
            check(p, q, 'X');
        }
        else // WHITE O
        {
            reversi[q][p] = 'O';
            check(p, q, 'O');
        }
        //print_reversi();
        //printf("\n");
    }
}

main()
{
    set_reversi();
    scan_input();
    print_reversi();
}
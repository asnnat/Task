#include<stdio.h>

char reversi[8][8];
int i, j, k;
int num;

void set_reversi(){
    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
            reversi[i][j] = '.';
        }
    }

    reversi[3][3] = 'O';
    reversi[4][4] = 'O';
    reversi[3][4] = 'X';
    reversi[4][3] = 'X';
}

void print_reversi(){
    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
            printf("%c", reversi[i][j]);
        }
        printf("\n");
    }
}

int check(int x, int y, char z){
    int change = 0;
    // on right
    for(i = x + 1; i < 8; i++){
        if(reversi[y][i] == '.'){
            break;
        }
        if(reversi[y][i] == z){ // find terminal position first
            change++;
            for(j = i - 1; j > x; j--){ // then check position between them
                reversi[y][j] = z;
            }
            break;
        }
    }
    // on left
    for(i = x - 1; i >= 0; i--){
        if(reversi[y][i] == '.'){
            break;
        }
        if(reversi[y][i] == z){
            change++;
            for(j = i + 1; j < x; j++){
                reversi[y][j] = z;
            }
            break;
        }
    }
    // under
    for(i = y + 1; i < 8; i++){
        if(reversi[i][x] == '.'){
            break;
        }
        if(reversi[i][x] == z){
            change++;
            for(j = i - 1; j > y; j--){
                reversi[j][x] = z;
            }
            break;
        }
    }
    // over
    for(i = y - 1; i >= 0; i--){
        if(reversi[i][x] == '.'){
            break;
        }
        if(reversi[i][x] == z){
            change++;
            for(j = i + 1; j < y; j++){
                reversi[j][x] = z;
            }
            break;
        }
    }
    // on right under
    for(i = 1; y + i < 8 && x + i < 8; i++){
        if(reversi[y + i][x + i] == '.'){
            break;
        }
        if(reversi[y + i][x + i] == z){
            change++;
            for(j = i - 1; j > 0; j--){
                reversi[y + j][x + j] = z;
            }
            break;
        }
    }
    // on right over
    for(i = 1; y - i >= 0 && x + i < 8; i++){
        if(reversi[y - i][x + i] == '.'){
            break;
        }
        if(reversi[y - i][x + i] == z){
            change++;
            for(j = i - 1; j > 0; j--){
                reversi[y - j][x + j] = z;
            }
            break;
        }
    }
    // on left under
    for(i = 1; y + i < 8 && x - i >= 0; i++){
        if(reversi[y + i][x - i] == '.'){
            break;
        }
        if(reversi[y + i][x - i] == z){
            change++;
            for(j = i - 1; j > 0; j--){
                reversi[y + j][x - j] = z;
            }
            break;
        }
    }
    // on left over
    for(i = 1; y - i >= 0 && x - i >= 0; i++){
        if(reversi[y - i][x - i] == '.'){
            break;
        }
        if(reversi[y - i][x - i] == z){
            change++;
            for(j = i - 1; j > 0; j--){
                reversi[y - j][x - j] = z;
            }
            break;
        }
    }
    if(change == 0){
        return 1; // not change position must change player 
    }else{
        return 0; // change position must not change player
    }
}

void scan_input(){
    scanf(" %d", &num);
    //print_reversi();
    int temp = 0;
    for(k = 0; k < num; k++){
        char column;
        int row;

        scanf(" %c %d", &column, &row);

        int p = column - 'a';
        int q = row - 1;

        if(temp % 2 == 0){
            reversi[q][p] = 'X';
            if(check(p, q, 'X') == 1){
                temp++;
                reversi[q][p] = 'O';
                check(p, q, 'O');
            }
        }else{
            reversi[q][p] = 'O';
            if(check(p, q, 'O') == 1){
                temp++;
                reversi[q][p] = 'X';
                check(p, q, 'X');
            }
        }
        
        temp++;

        //print_reversi();
    }
}

main(){
    set_reversi();
    scan_input();
    print_reversi();
}
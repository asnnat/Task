#include<stdio.h>

int n;
int a[21][21]; // 20 is maximum size of array
int result = 0;

int higher(int x, int y, int max){
    if(x <= 0 || x > n || y <= 0 || y > n){
        return 0;
    }
    //printf("%d %d %d\n\n", x, y, max);
    // right
    if(x + 1 <= n  && a[y][x + 1] > a[y][x] && a[y][x + 1] != 100){
        higher(x + 1, y, a[y][x + 1]);
    }
    // left
    if(x - 1 > 0 && a[y][x - 1] > a[y][x] && a[y][x - 1] != 100){
        higher(x - 1, y, a[y][x - 1]);
    }
    // under
    if(y + 1 <= n  && a[y + 1][x] > a[y][x] && a[y + 1][x] != 100){
        higher(x, y + 1, a[y + 1][x]);
    }
    // over
    if(y - 1 > 0 && a[y - 1][x] > a[y][x] && a[y - 1][x] != 100){
        higher(x, y - 1, a[y - 1][x]);
    }
    // check answer
    if(result < max){
        result = max;
    }
}
main(){
    int x, y;
    scanf("%d %d %d", &n, &x, &y);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    higher(x, y, a[y][x]);

    printf("%d", result);
}
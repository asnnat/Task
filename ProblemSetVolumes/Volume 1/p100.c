#include<stdio.h>

int check(int n){
    int count = 0;
    
    while(1){
        count++;
        
        if(n == 1){
            break;
        }else if(n % 2 != 0){
            n = (n * 3) + 1;
        }else{
            n  = n / 2;
        }
    }

    return count;
}

main(){
    int a;
    int b;

    while(scanf("%d%d", &a, &b) == 2){
        int checked_a = a;
        int checked_b = b;

        if(a > b){
            checked_a = b;
            checked_b = a;
        }

        int i;
        int result = 0;
        for(i = checked_a; i < checked_b + 1; i++){
            int uncheck_max = check(i);

            if(uncheck_max > result){
                result = uncheck_max;
            }
        }

        printf("%d %d %d\n", a, b, result);
    }
}
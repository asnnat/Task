#include<stdio.h>

unsigned long long int pi[301];

unsigned long long int func(int x){
    unsigned long long int sum = 0;

    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= x + i; j++){
            for(int k = 1; k <= x + i + j; k++){
                sum = sum + ((i * j * k) % (i + j + k));
            }
        }
    }

    return sum;
}

main(){
    int n;
    scanf("%d", &n);

    int input[n];
    int max = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &input[i]);
        if(input[i] > max){
            max = input[i];
        }
    }

    pi[0] = 0;
    for(int i = 1; i < max + 1; i++){
        pi[i] = func(i);

        //printf("%d %lu\n", i, pi[i]);
    }

    for(int i = 0; i < n; i++){
        unsigned long long int result = pi[input[i]];

        printf("%llu\n", result);
    }
}
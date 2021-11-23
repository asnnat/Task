#include<stdio.h>
#include<math.h>

main(){
    double a,b;
    scanf("%lf %lf", &a, &b);

    double c = sqrt((a * a) + (b * b));

    printf("%lf", c);
}

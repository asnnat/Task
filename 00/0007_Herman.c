#include<stdio.h>
#include<math.h>

main(){
	double a;
	double b = 3.141592653589793;
	scanf("%lf",&a);

	printf("%lf\n%lf",b * pow(a, 2), 2 * pow(a, 2));
}

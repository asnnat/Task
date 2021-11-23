#include<stdio.h>

main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int x = a+b+c;
	if(x >= 80)
		printf("A");
	else if(x > 74)
		printf("B+");
	else if(x > 69)
		printf("B");
	else if(x > 64)
		printf("C+");
	else if(x > 59)
		printf("C");
	else if(x > 54)
		printf("D+");
	else if(x > 49)
		printf("D");
	else
		printf("F");
}

#include<stdio.h>

main(){
	int n;
	scanf("%d", &n);

	int max, min;
	for(int i = 0; i < n; i++)
	{
		int x;
		scanf("%d", &x);
		
		if(i == 0){
			max = x;
			min = x;
		}
		if(x > max)
			max = x;
		if(x < min)
			min = x;
	}

	printf("%d\n%d", min, max);
}

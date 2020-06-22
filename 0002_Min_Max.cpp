#include<stdio.h>
main()
{
	int n;
	scanf("%d", &n);
	int min = 2000000000;
	int max = -2000000000;
	for(int i = 0; i < n; i++)
	{
		int x;
		scanf("%d", &x);
		if(x > max)
		{
			max = x;
		}
		if(x < min)
		{
			min = x;
		}
	}
	printf("%d\n", min);
	printf("%d", max);
}

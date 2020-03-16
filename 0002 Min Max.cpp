#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	if(0<n<=1000)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		int m=a[0];
		int M=a[0];
		for(int i=0;i<n;i++)
		{
			if(m>a[i])
			{
				m=a[i];
			}
			if(M<a[i])
			{
				M=a[i];
			}
		}
		printf("%d\n%d",m,M);
	}
}

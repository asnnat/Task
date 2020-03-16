#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d\n%d\n%d",&a,&b,&c);
	int x=a+b+c;
	if(0<=x<=100 && 0<=a<=30 && 0<=b<=30 && 0<=c<=40)
	{
		if(x<80)
		{
			if(x>74)
			{
				printf("B+");
			}
			else if(x>69)
			{
				printf("B");
			}
			else if(x>64)
			{
				printf("C+");
			}
			else if(x>59)
			{
				printf("C");
			}
			else if(x>54)
			{
				printf("D+");
			}
			else if(x>49)
			{
				printf("D");
			}
			else
			{
				printf("F");
			}
		}
		else
		{
			printf("A");
		}
	}
}

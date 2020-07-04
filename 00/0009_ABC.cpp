#include<stdio.h>
main()
{
	int a[3];
	for(int i=0;i<3;i++)
	{
		scanf("%d ",&a[i]);
	}
	int x;
	for(int i=0;i<3;i++)
	{
		for(int j=i;j<3;j++)
		{
			if(a[i]>a[j])
			{
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
	char b[3];
	int c[3];
	for(int i=0;i<3;i++)
	{
		scanf("%c",&b[i]);
		c[i]=b[i];
	}
	for(int i=0;i<3;i++)
	{
		if(c[i]==65)
		{
			printf("%d ",a[0]);
		}
		if(c[i]==66)
		{
			printf("%d ",a[1]);
		}
		if(c[i]==67)
		{
			printf("%d ",a[2]);
		}
	}
}

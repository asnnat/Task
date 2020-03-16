#include<stdio.h>
main()
{
	int X1;
	int S;
	scanf("%d %d",&X1,&S);
	if(-1000<=X1<=1000 && -1000<=S<=1000)
	{
		printf("%d",(2*S)-X1);
	}
}

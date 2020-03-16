#include<stdio.h>
main()
{
	int a[10];
	int i,j;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	int n=0;
	int m=0;
	int b[10];
	for(i=0;i<10;i++)
	{
		b[i]=a[i]%42;
	}
	for(i=0;i<10;i++)
    {
        for(j=0;j<i;j++)
        {
            if(b[i]<b[j])
            {
                n=b[i];
                b[i]=b[j];
                b[j]=n;
            }
        }
    }
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
        {
            if(b[i]==b[j])
            {
                b[j]=-1;
            }
        }
	}
	for(i=0;i<10;i++)
    {
        if(b[i]!=-1)
        {
        	m++;
		}
    }
    printf("%d",m);
}


#include<stdio.h>
main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int a,b,c,d;
    int i,j,k=0;
    int x=1,y=0,z;
    for(i=1;i<=A;i++)
    {
        if(A%i==0)
        {
            a=i;
            c=A/a;
        }
        if(C>0)
        {
            x=-C;
            y=C;
        }
        else if(C<0)
        {
            x=C;
            y=-C;
        }
        for(j=x;j<=y;j++)
        {
            if(j!=0)
            {
                b=C/j;
                if(j*b==C)
                {
                    d=j;
                    if((a*d)+(b*c)==B)
                    {
                        k++;
                        if(B==0)
                        {
                            z=b;
                            b=d;
                            d=z;
                        }
                        printf("%d %d %d %d",a,b,c,d);
                        j=y+1;
                        i=A+1;
                    }
                }
            }
        }
        if(B==0&&C==0)
        {
            b=0;
            d=0;
            c=A/a;
            printf("%d %d %d %d",a,b,c,d);
            k++;
            i=A+1;
        }
    }
    if(k==0)
    {
        printf("No Solution");
    }
}

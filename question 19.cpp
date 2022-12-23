#include <stdio.h>
#include <math.h>

int main()
{
	float x, sum=1, fact=1, i,j,n;
	printf("enter a x");
	scanf("%f",&x);
	printf("enter a n");
	scanf("%f",&n);
	
	for (i=1;i<=n; i++)
	{
	 for(j=1; j<=i; j++)
	 {
	 fact*=j;
	 }
	sum+= pow(x,i)/fact;
	 fact=1;
	}
	printf("sum = %f", sum);
	return 0;
}
	

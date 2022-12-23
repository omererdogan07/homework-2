#include <stdio.h>
#include <math.h>
int main()
{
	float x, a, i, sum = 0;
	printf("enter a number");
	scanf("%f" ,&x);
	for (i=1; i<=x; i++)
	{
		a = 1/i;
		printf ("%f \n" ,a);
		sum+=a;
	}
	printf ("sum : %f\n" ,sum);
	return 0;
}

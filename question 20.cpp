#include <stdio.h>
#include <math.h>
int main()
{
	double sum, x, count=3, lcount;
	printf ("enter a x");
	scanf ("%lf" ,&x);
	printf ("enter a lcount");
	scanf ("%lf" ,&lcount);
	sum = x - pow(x,count);
	for (count = 5; count<= lcount; count = count+2)
	{
		sum += pow(x,count);
	}
	printf ( " sum=%lf" ,sum);
	return 0;
	
}

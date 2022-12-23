#include <stdio.h>
#include <math.h>
int main ()
{
	int num, count = 1, sum = 0;
	printf ( "enter a num");
	scanf ( "%d" ,&num);
	while ( num > count )
	{
		if ( num & count == 0)
		{
			sum += count;
			count++;
		}
		else
		count++;
	}
	if (sum == num)
	printf ("%d perfect number" ,num);
	else
	printf ("%d not perfect number" ,num);
	return 0;
	
}

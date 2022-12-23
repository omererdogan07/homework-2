#include <stdio.h>
#include <math.h>
int main()
{
	double counter = 0, sum = 0;
	int number;
	printf ("enter a binary number");
	scanf ("%d" ,&number);
	while (number >= 2)
	{
	sum += (number % 10) * pow (2, counter);
	number= number / 10;
	counter++;
	}
	sum += pow(2, counter);
	printf( "sum %lf", sum);
	return 0;
}

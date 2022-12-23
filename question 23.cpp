#include <stdio.h>
#include <math.h>
int main()
{
	int number,counter = 0, sum = 0;
	printf ("enter a number");
	scanf("%d" ,&number) ;
	while (number >= 2)
	{
	sum += (number % 2) * pow (10, counter);
	number = number / 2;
	counter++;
	}
	sum += number * pow (10, counter);
	printf ("sum %d" ,sum);
	return 0;
}	

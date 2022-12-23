#include <stdio.h>
#include <math.h>
int main()
{
	int number, lastDigit, newNumber = 0, temp;
	printf ("enter a number");
	scanf ("%d" ,&number);
	temp=number;
	while (number > 0)
	{
		lastDigit = number %10;
		newNumber = (newNumber *10 )+ lastDigit;
		number = number /10;
	}
	if (temp == newNumber)
	printf ("palindrom number");
	else
	printf ("not palindrom number");
	return 0;
}

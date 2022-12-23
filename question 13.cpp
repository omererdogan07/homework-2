#include <stdio.h>
#include <math.h>
int main()
{
	int number, digit, temp, fact, sum;
	printf("enter a number");
	scanf("%d" ,&number);
	temp=number;
	while (number>=10)
	{
		fact=1;
		digit=number%10;
		for (digit; digit >=1; digit--)
		{
			fact = fact* digit;
		}
		number = number /10;
		sum = sum + fact;
	}
	fact = 1;
	for (number; number>= 1; number--)
	{
		fact = fact * number;
		sum = sum +fact;
	}
	if (sum == temp)
	printf ("%d strong number" ,temp);
	else
	printf ("%d not strong number" ,temp);
	return 0;
	
}

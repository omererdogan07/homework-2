#include <stdio.h>
#include <math.h>
int main ()
{
	int num, sum, digit, temp;
	printf ("eneter a num");
	scanf ("%d", &num);
	temp = num;
	while (num >= 10)
	{
		digit = num % 10;
		num = num / 10;
		sum = sum + pow(digit, 3);
		
	}
	sum = sum + pow (num, 3);
	if (temp == sum)
	printf ("%d armstrong num" ,temp);
	else
	printf ("%d not armstrong num" ,temp);
	return 0;
}

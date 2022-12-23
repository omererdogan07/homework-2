#include <stdio.h>
#include <math.h>
int main ()
{
	int lastNum, digit, num = 1, temp, sum;
	printf ("enter a lastNum");
	scanf ("%d", &lastNum);
	while (num <= lastNum)
	{
		temp = num;
		sum = 0;
		while (num >= 10)
		{
			digit = num % 10;
			sum = sum + pow (digit, 3);
			num = num / 10;
		}
		sum = sum + pow (num,3);
		if ( sum == temp)
		{
			printf ("%d \n" ,sum);
			temp++;
			num = temp;
		}
		else
		temp++;
		num = temp;
	}
}

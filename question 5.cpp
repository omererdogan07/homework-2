#include <stdio.h>
#include <math.h>
int main ()
{
	int number=1, count=4;
	while (count >0)
	{
		number = 2 * number;
		count--;
	}
	printf ("2^4 = %d" ,number);
	return 0;
}

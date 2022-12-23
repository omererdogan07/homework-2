#include <stdio.h>
#include <math.h>
int main ()
{
	int sum = 0, x=1;
	while (x<=50)
	{
		sum = sum + x;
		x++;
	}
	printf ( "sum = %d" ,sum);
	return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
	int n=1, number=0, sum=0, digit=1;
	printf ("enter a n");
	scanf("%d", &n);
	while (digit <= n)
	{
		number = number * 10;
		number++;
		digit++;
		sum += number;
	}
	printf (" sum = %d" ,sum);
	return 0;
}

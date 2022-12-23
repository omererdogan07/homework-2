#include <stdio.h>
#include <math.h>
int main ()
{
	int x, num, lastnum, count;
	printf ("enter a lastnum");
	scanf ("%d", &lastnum);
	for (num= 1; num<= lastnum; num++)
	{
		count=0;
		for (x=2; x<num; x++)
		{
			if ( num % x ==0)
			{
				count++;
				break;
			}
		}
		if(count == 0&& num != 1)
		printf ("%d" ,num);
	}
	return 0;
}

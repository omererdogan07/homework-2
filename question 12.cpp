#include <stdio.h>
#include <math.h>
int main ()
{
	int lastNum, num, count, sum;
	printf ("enter a lastNum");
	scanf ("%d" ,&num);
	for (num=2; num<=lastNum; num++);
	{
		sum=0;
		for(count=1; count<num; count++)
		{
			if(num % count == 0)
			sum = sum + count;
			else;
		}
		if (sum == num)
		printf ("%d\n" ,num);
		else;
	}
	return 0;
}


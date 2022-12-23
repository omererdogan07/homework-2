#include<stdio.h>
#include<math.h>
int main()
{

	int number=100, sum=0;
	while (number < 200)
	{
		if (number % 9==0)
		{
		printf ("number =%d \n", number) ;
		sum += number; number += 9;
		}
		else
		number++;

	}
	printf("sum = %d" ,sum);
	return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
	int lcm, num1, num2;
	printf ("enter a num1");
	scanf ("%d" ,&num1);
	printf ("enter a num2");
	scanf ("%d" ,&num2);
	if(num1 % num2 ==0)
	printf ("lcm = %d" ,num1);
    if(num1 % num2 ==0)
    printf ("lcm = %d" ,num2);
    else
    {
    	lcm = num1 * num2;
    	printf ("lcm = %d" ,lcm);
	}
	return 0;
}

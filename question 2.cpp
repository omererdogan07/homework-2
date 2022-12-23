#include <stdio.h>
#include <math.h>
int main ()
{
	double delta, i, j, t, x1, x2;
	printf ("enter a coef");
	scanf("%lf", &i);
	scanf("%lf", &j);
	scanf("%lf", &t);
	delta = (j*j)- (4*i*j);
	x1 = (-j - sqrt (delta)) / (2*i);
	x2 = (-j + sqrt (delta)) / (2*i);
	if (delta <0 )
	printf ("not real root");
	else if (delta == 0)
	printf ("x1 : %lf", x1);
	else
	printf ( "x1 : %lf",x1);
	printf ( "x2 : %lf", x2);
	return 0 ;
	}


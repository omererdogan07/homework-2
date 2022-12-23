#include <stdio.h>
#include <math.h>
int main ()
{
	float x, y, area, perimeter;
	printf ("enter a x \n");
	scanf ("%f", &x);
	printf ("enter a y \n");
    scanf ("%f", &y);
    area = x*y;
    perimeter = 2* (x+y);
    printf ( "area = %f \n preimeter = %f", area, perimeter);
    return 0;
}

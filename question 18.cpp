#include <stdio.h>
int main ()
{
	
	int n, i, j, x=1;
	printf ("enter a n");
	scanf ("%d", &n);
	for (i=1; i<=n; i++)
	{
		
		for (j=1; j<=1; j++)
		{
			printf ("%d", x);
			if (x==1)
			x--;
			else
			x++;
		}
		printf ("\n");
		if (i % 2 == 0)
		x=0;
		else
		x=1;
    }
    
}


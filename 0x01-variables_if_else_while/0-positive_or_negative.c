#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ( n < 0 ) 
	{
	  /* if condition is true then print n is negative */
		printf("%d is negative\n", n );
	} 
	else if (n==0)  
	
	  /* if condition is true  print n is zero*/
		printf("%d is zero\n", n );
									   }
	else
	/* if condition is false print n is positive*/
		printf("%d is positive\n", n);
						    	
	return (0);
}

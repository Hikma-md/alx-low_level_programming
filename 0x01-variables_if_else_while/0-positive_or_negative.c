	#include <stdlib.h>
	#include <time.h>
	#include <stdio.h>
	/*  a code that differs the no whether it is positive or not */

	/* its the main part */
	int main(void)
	{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* jhjhjjh */
		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else
		{
			printf("%d is negative\n", n);
		}
		return (0);
	}

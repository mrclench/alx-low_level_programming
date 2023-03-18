#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* added the header stdio.h */

/* betty style doc for function main goes here */

int main ()
{
	int n;

	// Generate a random number between -RAND_MAX/2 and RAND_MAX/2
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	// This is to check if the number is positive or negative 
	if (n > 0) {
		printf("%d is positive\n", n);
	} else if (n < 0) {
		printf("%d is negative\n", n);
	} else {
		printf("%d is zero\n", n);
	}
	return (0);

}


#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - entry point
 *Return: usually 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d", n, n % 10);
	if (n % 10 > 5)
	printf("and is greater than 5");
	else if (n % 10 == 0)
	printf("and is zero");
	else if (n % 10 < 6 && n % 10 != 0)
	printf("and is less than 6 and not 0");
	return (0);
}
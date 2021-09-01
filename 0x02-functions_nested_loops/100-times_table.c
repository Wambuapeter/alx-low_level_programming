#include <stdio.h>

/**
 * print_times_table - prints the times table of numbers between 0-15
 * @n: number
*/

void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
	{
		putchar('0');

		for (b = 1; b <= n; b++)
		{
			putchar(',');
			putchar(' ');

			c = a * b;
			if (c <= 100)
			{
				putchar(' ');
				putchar(' ');
			}
			else
			{
				putchar((c / 10) + '0');
			}
			putchar((c % 10) + '0');
		}
		putchar('\n');
	}
	}
}

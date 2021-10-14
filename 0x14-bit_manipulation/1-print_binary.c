#include "main.h"
/**
 * print_binary - prints binary rep of a number
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned int now;

	for (i = 65; i >= 0; i--)
	{
		now = n >> 1;

		if (now & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

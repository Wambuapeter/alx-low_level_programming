#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to be tested
 * Return: 0 or 1 or -1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	return (0);
}

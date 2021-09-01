#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: number being used
 * Return: 0
*/

int print_last_digit(int n)
{	int m = n % 10;

	if (m < 0)
	{
		m = m * (-1);
	}
	putchar(m + '0');
	return (m);
}

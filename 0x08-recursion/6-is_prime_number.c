#include "main.h"
/**
 * functionaux - returns 1 if input is a prime no
 * @n: number
 * @i: i
 * Return: 0,but 1 if input is prime number
 */
int functionaux(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (functionaux(n, i + 1));
}

/**
 * is_prime_number - returns 1 if input is a prime no
 * @n: n
 * Return: 0,but 1 if input is prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (functionaux(n, 2) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"
/**
 * _isdigit- checks for a digit
 * Return: 1 if c is a digit,else o
 * @c: the digit being tested
 */
int _isdigit(int c)
{
	if (c <= '0' && c >= '9')
	return (1);
	else
	return (0);
}

#include "main.h"
/**
 * set_bit - sets value of a bit to 1
 * @n: the number
 * @index: the index starting from 0
 * Return: 1,-1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (0);
	*n = ((1UL << index) | *n);
	return (1);
}

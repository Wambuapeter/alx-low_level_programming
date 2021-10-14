#include "main.h"
/**
 * get_bit - returns value of a bit
 * @n: integer to deal with
 * @index: index starting from 0 of the bit
 * Return: value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);
	bit_value = (n >> index) & 1;

	return (bit_value);
}

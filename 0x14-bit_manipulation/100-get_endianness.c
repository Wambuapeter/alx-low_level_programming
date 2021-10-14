#include "main.h"
/**
 * get_endianness - checks the endianess
 * Return: 0 if big endian,1 if little
 */
int get_endianness(void)
{
	unsigned int x = 1;
	int check;

	check = (int) (((char *)&x)[0]);
	return (check);
}

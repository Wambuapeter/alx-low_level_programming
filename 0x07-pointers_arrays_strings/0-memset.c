#include "main.h"
/**
 * _memset - fills the first n bytes of memory area pointed by s
 * with a constant byte b
 * @s: points to a memory area
 * @b: constant byte filled
 * @n: number of bytes
 * Return: pointer to the memory area by s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_memset(s, b);
	}
	return (*s);
}

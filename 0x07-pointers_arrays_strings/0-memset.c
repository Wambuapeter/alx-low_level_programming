#include "main.h"
#include <string.h>
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
	memset(s, b, n);
	return (s);
}

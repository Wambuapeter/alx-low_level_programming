#include "main.h"
#include <string.h>
/**
 * _memcpy - copies n bytes from memory area src
 * to memory area dest
 * @dest: memory area copied to
 * @src: memory area copied from
 * @n: number of bytes copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}

#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: where to be copied
 * @src: string copied from
 * @n: number of bytes to copy
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int length;

	length = 0;

	while (src[length] != '\0' && length < n)
	{
		dest[length] = src[length];
		length++;
	}

	while (length < n)
	{
		dest[length] = '\0';
		length++;
	}

	return (dest);
}

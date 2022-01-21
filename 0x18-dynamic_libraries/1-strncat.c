#include "main.h"
/**
 * _strncat - appends src string to dest string
 * and overwrites the terminating null byte (\0) at the end of dest
 * @dest: the first string
 * @src: second string
 * @n: no of bytes
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0, length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	while (src[length] != '\0' && j < n)
	{
		dest[length] = dest[j];
		j++;
		length++;
	}
	dest[length] = '\0';

	return (dest);
}

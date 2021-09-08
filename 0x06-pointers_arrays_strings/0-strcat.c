#include "main.h"
/**
 * *_strcat - appends src string to dest string
 * and overwrites the terminating null byte (\0) at the end of dest
 * @dest: the first string
 * @src: second string
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src);
{
	int j = 0, length = 0;

	while (dest[length] != '\0')
	{
		lenght++;
	}
	while (src[length] != 0)
	{
		dest[length] = dest[j];
		j++;
		length++;
	}
	dest[length] = '\0';

	return (dest);
}

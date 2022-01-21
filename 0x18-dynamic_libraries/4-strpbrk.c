#include "main.h"
#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: bytes
 * Return: a pointer to byte s
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

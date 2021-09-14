#include "main.h"
#include <string.h>
/**
 * _strspn - gets length of a prefix substring
 * @s: the string
 * @accept: bytes from which consisted
 * Return: no of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

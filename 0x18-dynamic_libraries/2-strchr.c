#include "main.h"
#include <string.h>
/**
 * _strchr - locates a character in a string
 * @s: string to locate from
 * @c: character to be located
 * Return: pointer to the first occurrence of c
 * null if none located
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}

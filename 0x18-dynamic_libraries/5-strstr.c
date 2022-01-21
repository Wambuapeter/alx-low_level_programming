#include "main.h"
#include <string.h>
/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: the substring finded
 * Return:a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

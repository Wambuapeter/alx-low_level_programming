#include <stdio.h>
/**
 * _isupper- checks if character is uppercase
 * Return: returns 0 if uppercase,otherwise 1
 * @c:character to be tested
 */
int _isupper(int c)
{
	if (c <= 65 && c >= 90)
	return 1;
	else
	return 0;
}

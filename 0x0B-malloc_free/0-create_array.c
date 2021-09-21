#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char and initializes to a char
 * @size: size of the array
 * @c: the character
 * Return: pointer to array,null if size = 0 or fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}

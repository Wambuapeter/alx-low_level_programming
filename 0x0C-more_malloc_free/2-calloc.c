#include "main.h"

/**
 * _calloc - allocates memory for an arrat=y of nmemb elements
 * @nmemb: number of elements
 * @size: size of array
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
	return (NULL);
	}

	return (ptr);
}

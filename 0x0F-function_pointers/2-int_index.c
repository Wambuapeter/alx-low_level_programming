#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: an array of elements
 * @size: no. of elements in the array
 * @cmp: pointer to the function to be used
 * Return: index of the first element for which
 * the cmp function doesn't return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (cmp == NULL)
	{
		return (-1);
	}
	if (array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}

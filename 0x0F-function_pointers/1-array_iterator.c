#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: an array
 * @size: size of the array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (*action == NULL)
	{
		return;
	}
	if (array == NULL)
	{
		return;
	}
	else
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			(action)(array[i]);
		}
	}
}

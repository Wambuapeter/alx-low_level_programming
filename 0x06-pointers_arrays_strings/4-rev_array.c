#include <stdio.h>
/**
 * reverse_array - reverses contents of a array
 * @a: the array reversed
 * @n: no of elements of the array
 * Return: zero value
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}

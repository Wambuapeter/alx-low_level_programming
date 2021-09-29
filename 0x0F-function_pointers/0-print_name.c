#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name printed
 * @f: a pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	else
	{
		(*f)(name);
	}
}

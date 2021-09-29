#include <stdio.h>

/**
 * print_name - prints a name
 * @name: the name printed
 * @f: a pointer
 */
void print_name(char *name, void (*f)(char *))
{
	printf("The name is %s\n", name);
}

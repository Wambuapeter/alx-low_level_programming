#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: string printed bbtn nos
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(ap);

	int i;

	va_start(ap, n);
	if (n == 0)
	{
		printf("\n");
	}
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("\n");
		}
		else
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}

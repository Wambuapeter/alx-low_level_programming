#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints strings followed by a new line
 * @separator: separates the strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(ap);

	int i;
	char *s;

	va_start(ap, n);
	if (n == 0)
	{
		printf("(nil)");
		return;
	}
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (separator == NULL)
		{
			printf("\n");
		}
		else
		{
		printf("%s%s", s, separator);
		}
		printf("\n");
		va_end(ap);
	}
}

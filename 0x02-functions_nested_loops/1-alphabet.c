#include <stdio.h>
/**
 *print_alphabet- prints the alphabet
 *Return: always o
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		putchar('\n');
	}
}

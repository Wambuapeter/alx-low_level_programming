#include "main.h"

/**
 * main - prints number of arguments
 * @argc: no of command line arguments
 * @argv: array of size argc
 * Return: always zero(success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
        return (0);
}

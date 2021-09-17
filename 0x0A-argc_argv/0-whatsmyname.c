#include "main.h"

/**
 * main - prints the programs name
 * Return: always zero(success)
 * @argc: no of command line arguments
 * @argv: array of size argc
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

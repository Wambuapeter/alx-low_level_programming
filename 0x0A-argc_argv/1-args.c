#include "main.h"

/**
 * main - prints number of arguments
 * @argc: no of command line arguments
 * @argv: array of size argc
 * Return: always zero(success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

#include <stdio.h>
#include <string.h>

/**
 * main - prints the programs name
 * Return: always zero(success)
 * @argc: no of command line arguments
 * @argv: array of size argc
 */
int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
}

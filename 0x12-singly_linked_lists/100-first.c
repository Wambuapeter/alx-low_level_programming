#include <stdio.h>

void __attribute__((constructor)) before(void);
/**
 * before - prints a string before main function
 */
void before(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}

#include <stdio.h>
/**
 *main - this code prints the size of various types on the computer
 *Return: always 0
 */
int main(void)
{
	 int type_int;
	 char type_char;
	 float type_float;
	 long int type_long;
	 long long int type_long_long;

	 printf("size of int is:%zu bytes\n", sizeof(type_int));
	 printf("size of char is:%zu bytes\n", sizeof(type_char));
	 printf("size of float is:%zu bytes\n", sizeof(type_float));
	 printf("size of long int is:%zu bytes\n", sizeof(type_long));
	 printf("size of long long int is:%zu bytes\n", sizeof(type_long_long));
	return (0);
}

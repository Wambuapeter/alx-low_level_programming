#include <stdio.h>
/**
 *main -this code prints the size of various types on the computer
 *Return -always 0
 */
int main(void)
{
	 int type_int;
	 char type_char;
	 float type_float;
	 double type_double;
	 printf("size of int is:%zu bytes\n", sizeof(type_int));
	 printf("size of char is:%zu bytes\n", sizeof(type_char));
	 printf("size of float is:%zu bytes\n", sizeof(type_float));
	 printf("size of double is:%zu bytes\n", sizeof(type_double));
	return (0);
}

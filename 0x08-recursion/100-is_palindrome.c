#include "main.h"
/**
 * palindro - check for palindrome words
 * @s: s
 * @inicio: inicio
 * @fin: fin
 * Return: 1 if a string is a palindrome and 0 if not
 */
int palindro(char *s, int inicio, int fin)
{
	if (inicio < fin && s[inicio] == s[fin])
	{
		return (palindro(s, inicio + 1, fin - 1));
	}
	if (inicio >= fin)
	{
		return (1);
	}
	return (0);
}

/**
 * _strlen - check for palindrome words
 * @s: s
 * Return: 1 if a string is a palindrome and 0 if not
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen(s + 1) + 1);
}

/**
 * is_palindrome - check for palindrome words.
 * @s: s
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int  inicio = 0;
	int fin;

	fin = _strlen(s);
	return (palindro(s, inicio, fin - 1));
}

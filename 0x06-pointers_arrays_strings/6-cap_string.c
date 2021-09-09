#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @s: string capitalized
 * Return: zero
 */
char *cap_string(char *s)
{
	int i, j;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};
	for (i = 0; str[i] != '\0')
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (s[i] = spe[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (0);
}

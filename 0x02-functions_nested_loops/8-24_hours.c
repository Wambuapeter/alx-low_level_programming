#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
*/

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = '0'; a <= '2'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '5'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					if (a != '2' || (a == '2' && b <= '3'))
					{
						putchar(a);
						putchar(b);
						putchar(':');
						putchar(c);
						putchar(d);
						putchar('\n');
					}
				}
			}
		}
	}
}

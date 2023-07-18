#include "main.h"

/**
 * jack_bauer - Function that prints every minute of the day for Jack
 *
 * Description: Prints from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int h, r, m, n;

	for (h = 0; h <= 2; h++)
	{
		for (r = 0; r <= 9; r++)
		{
			if ((h <= 1 && r <= 9) || (h <= 2 && r <= 3))
			{
				for (m = 0; m <= 5; m++)
				{
					for (n = 0; n <= 9; n++)
					{
						_putchar(h + '0');
						_putchar(r + '0');
						_putchar(58);
						_putchar(m + '0');
						_putchar(n + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}

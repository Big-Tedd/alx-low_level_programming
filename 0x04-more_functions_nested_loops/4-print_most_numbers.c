#include "main.h"

/**
 * print_most_numbers - The numbers, from 0 to 9
 * Description: Prints all the numbers exluding 2 and 4
 * Return: All the numbers exluding 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; x <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_number - Prints an integer using only the putchar function.
 * No arrays and pointers are used.
 * @n: Integer to be printed.
 *
 * Return: void.
 */
void print_number(int n)
{
	unsigned int num;

	/* Check if number is negative */
	num = n;
	if (n < 0)
	{
		_putchar(45);
		num = -n;
	}

	/* Print number by recursion */
	if (num / 10)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}

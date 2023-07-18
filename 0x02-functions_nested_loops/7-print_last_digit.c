#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a num
 * @n: The num to be checked
 * Return: Values of the last digits of a number
 */

int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar(digit + '0');
	return (digit);
}

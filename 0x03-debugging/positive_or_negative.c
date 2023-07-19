#include "main.h"

/**
 * main - Checks if number is -ve, +ve or zero
 * @i: number to be checked
 * Return: Always (0) zero
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
	return;
}

#include "main.h"

/**
 * _isupper - Checks if a letter is capital
 * @x: The letter to be checked
 * Return: 1 for uper letter or 0 for lower
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}

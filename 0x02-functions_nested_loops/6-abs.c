#include "main.h"

/**
 * _abs - Function that computes the absolute value of an int
 * @i: Num to be computed
 * Return: The absolute value of a number or (0) zero
 */

int _abs(int i)
{
	if (i < 0)
	{
		int abs_val;

		abs_val = i * -1;
		return (abs_val);
	}
	return (i);
}

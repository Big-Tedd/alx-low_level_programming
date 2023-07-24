#include "main.h"

/**swap_int - swaps the values of two integers
 * @a: 1st int to be swapped
 * @b: 2nd int to be swapped
 * Return: Always (0) zero
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}

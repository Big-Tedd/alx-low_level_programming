#include "main.h"

/**
 * reverse_array - function that reverses an array of integers
 * @a: pointer to an array
 * @n: number of elements of the array
 * Return: zero (0) if success
 */

void reverse_array(int *a, int n)
{
	int i = 0, c;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		c = a[i];
		a[i] = a[n];
		a[n] = c;
		n--;
	}
}

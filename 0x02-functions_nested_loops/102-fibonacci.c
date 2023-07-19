#include <stdio.h>

/**
 * main - function that prints 1st 52 Fibonacci numbers
 * Return: Always (0) zero
 */

int main(void)
{
	int i = 0;
	long j = 1;
	long k = 2;

	while (i < 52)
	{
		if (i == 0)
			printf("%ld", j);
		else if (i == 1)
			printf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
		++i;
	}
	printf("\n");
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @buf: buffer.
 * @size: size of buffer.
 * Return: no return.
 */

void print_buffer(char *b, int size)
{
	int a, b, c;

	if (size <= 0)
		printf("\n");
	else
	{
		for (a = 0; a < size; a += 10)
		{
			printf("%.8x:", a);
			for (b = a; b < a + 10; b++)
			{
				if (b % 2 == 0)
					printf(" ");
				if (b < size)
					printf("%.2x", *(buf + b));
				else
					printf("  ");
			}
			printf(" ");
			for (c = a; c < a + 10; c++)
			{
				if (c >= size)
					break;
				if (*(buf + l) < 32 || *(buf + l) > 126)
					printf("%c", '.');
				else
					printf("%c", *(buf + l));
			}
			printf("\n");
		}
	}
}

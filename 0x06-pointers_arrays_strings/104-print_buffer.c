#include "main.h"
#include <stdio.h>

/**
 * print_line - Prints s bytes of a buffer
 * @buffer: Buffer to print
 * @bytes: Number of bytes to print
 * @line: Line number of buffer to print
 *
 * Return: void
 */
void print_line(char *buffer, int bytes, int line)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= bytes)
			printf("%02x", buffer[line * 10 + j]);
		else
			printf("  ");

		if (j % 2)
			putchar(' ');
	}

	for (k = 0; k <= bytes; k++)
	{
		if (buffer[line * 10 + k] > 31 && buffer[line * 10 + k] < 127)
			putchar(buffer[line * 10 + k]);
		else
			putchar('.');
	}

	putchar('\n');
}

/**
 * print_buffer - Prints a buffer
 * @buffer: Buffer to print
 * @size: Size of buffer
 *
 * Return: void
 */
void print_buffer(char *buffer, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);

		if (i < size / 10)
		{
			print_line(buffer, 9, i);
		}
		else
		{
			print_line(buffer, size % 10 - 1, i);
		}

		putchar('\n');
	}

	if (size == 0)
		putchar('\n');
}


#include "main.h"
#include <stdio.h>

/**
 * print_line_buffer - Prints 'size' bytes of a
 * buffer 'buffer'starting from a given line 'line'
 * @buffer: Buffer to print
 * @size: Number of bytes from the buffer to print
 * @line: Line of the buffer to print
 *
 * Return: void
 */
void print_line_buffer(char *buffer, int size, int line)
{
	int idx, k;

	for (idx = 0; idx <= 9; idx++)
	{
		if (idx <= size)
			printf("%02x", buffer[line * 10 + idx]);
		else
			printf("  ");

		if (idx % 2)
			putchar(' ');
	}

	for (k = 0; k <= size; k++)
	{
		if (buffer[line * 10 + k] > 31 && buffer[line * 10 + k] < 127)
			putchar(buffer[line * 10 + k]);
		else
			putchar('.');
	}
}

/**
 * print_formatted_buffer - Prints a buffer in a formatted way
 * @buf: Buffer to print
 * @buf_size: Size of the buffer
 *
 * Return: void
 */
void print_formatted_buffer(char *buf, int buf_size)
{
	int i;

	for (i = 0; i <= (buf_size - 1) / 10 && buf_size; i++)
	{
		printf("%08x: ", i * 10);

		if (i < buf_size / 10)
		{
			print_line_buffer(buf, 9, i);
		}
		else
		{
			print_line_buffer(buf, buf_size % 10 - 1, i);
		}

		putchar('\n');
	}

	if (buf_size == 0)
		putchar('\n');
}

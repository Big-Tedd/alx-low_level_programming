#include "main.h"

/**
 * puts2 - prints every other char of a str
 * starting with the 1st char followed by new line
 * @str: value of pointer
 * Return: Always (0) success
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

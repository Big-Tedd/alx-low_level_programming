#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Zero
 */

int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
		if (a != 'q' && a != 'e')
			putchar(a);
	putchar('\n');
	return (0);
}

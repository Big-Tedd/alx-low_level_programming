#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: 1st string to be compared
 * @s2: 2nd string to be compared
 * Return: Always zero (0) if both strings are the same.
 */

int _strcmp(char *s1, char *s2)
{
	int a;
	int b = 0;

	for (a = 0; s1[a] != '\0' && b == 0; a++)
	{
		b = s1[a] - s2[a];
	}

	return (b);
}

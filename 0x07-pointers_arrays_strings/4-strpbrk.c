#include "main.h"

/**
 * _strpbrk - function locates the first occurence in the string s
 * of any of the bytes in the string accept
 * @s: string to be inspected
 * @accept: string containing the bytes to look for
 * Return: pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *s != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (*s == accept[b])
			{
				return (s);
			}
		}
		++s;
	}
	return (0);
}

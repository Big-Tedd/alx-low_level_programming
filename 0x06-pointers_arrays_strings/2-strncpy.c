#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: pointer to the destination string
 * @src: pointer to source string
 * @n: number of bytes to be used
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for (; x < n; x++)
		dest[x] = '\0';

	return (dest);
}

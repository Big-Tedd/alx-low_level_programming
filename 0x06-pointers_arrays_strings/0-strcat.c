#include "main.h"

/**
*_strcat - function that concatenates two strings.
*@dest: pointer to destination of a string.
*@src: pointer to source.
*Return: pointer to destination string.
*/

char *_strcat(char *dest, char *src)
{
	int len, j;

	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (j = 0; src[j] != '\0'; j++, len++)
	{
		dest[len] = src[j];
	}
	dest[len] = '\0';
	return (dest);
}

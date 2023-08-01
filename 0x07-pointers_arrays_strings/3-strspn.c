#include "main.h"

/**
 * _strspn - gets the length of the prefic substring
 * @s: string where substring will look
 * @accept: substring of accepted characters
 * Return: length of occurence
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value, check;

	unsigned int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		t = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accepted[n] == s[i])
			{
				c++;
				t = 1;
			}
		}
	}
}

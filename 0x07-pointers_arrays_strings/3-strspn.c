#include "main.h"

/**
 * _strspn - gets the length of the prefic substring
 * @s: string where substring will look
 * @accept: substring of accepted characters
 * Return: length of occurence
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, a, b, flag;

	b = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
			{
				b++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}

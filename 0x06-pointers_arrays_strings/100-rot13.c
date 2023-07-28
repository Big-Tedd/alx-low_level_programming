#include "main.h"

/**
 * rot13 - Encodes strings using rot13.
 * @s: Pointer to the string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *s)
{
	int i, j;
	char r1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char r2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (r1[j] == s[i])
			{
				s[i] = r2[j];
				break;
			}
		}
	}
	return (s);

}

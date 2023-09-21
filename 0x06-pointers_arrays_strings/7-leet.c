#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string
 */
char *leet(char *s)
{
	int i;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = b[s[i] - 'a'];
		else if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = b[s[i] - 'A'];
	}

	return s;
}

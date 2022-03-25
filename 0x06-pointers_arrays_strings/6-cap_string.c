#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int o, p, q;
	char seps[] = {' ', '\t', '\n', ',', ';',
	     '.', '!', '?', '"', '(', ')', '{', '}'};

	q = 'A' - 'a';
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] += q;
	for (o = 0; s[o] != '\0'; o++)
	{
		for (p = 0; p < 13; p++)
		{
			if (s[o] == seps[p])
			{
				if (s[o + 1] >= 'a' && s[o + 1] <= 'z')
					s[o + 1] += q;
			}
		}
	}
	return (s);
}

#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the argument of a program
* @ac: argument count
* @av: argument vector
* Return: pointer to an array of chars
*/

char *argstostr(int ac, char **av)
{
	char *abot;
	int a, b, c, ba;

	if (ac == 0)
		return (NULL);

	for (a = b = 0; b < ac; b++)
	{
		if (av[b] == NULL)
			return (NULL);
		for (c = 0; av[b][c] != '\0'; c++)
			a++;
		a++;
	}

	abot = malloc((a + 1) * sizeof(char));

	if (abot == NULL)
	{
		free(abot);
		return (NULL);
	}

	for (b = c = ba = 0; d < c; c++, ba++)
	{
		if (av[b][c] == '\0')
		{
			abot[ba] = '\n';
			b++;
			ba++;
			c = 0;
		}
		if (ba < a - 1)
			abot[ba] = av[b][c];
	}

	abot[ba] = '\0';

	return (abot);
}

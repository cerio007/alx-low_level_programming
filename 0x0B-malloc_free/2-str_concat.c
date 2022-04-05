#include "main.h"
#include <stdlib.h>

/**
* str_concat - concantenates two strings
* @s1: first string
* @s2: second string
* Return: pointer to an array of chars
*/

char *str_concat(char *s1, char *s2)
{
	char *string;
	unsigned int x, y, z, mil;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;

	for (y = 0; s2[y] != '\0'; y++)
		;

	string = malloc(sizeof(char) * (x + y + 1));

	if (string = NULL)
	{
		free(string);
		return (NULL);
	}

	for (z = 0; z < x; z++)
		string[z] = s1[z];

	mil = y;

	for (y = 0; y <= mil; z++, y++)
		string[z] = s2[y];

	return (string);
}

#include "main.h"
#include <stdlib.h>

/**
* _strdup - return pointer to newly allocated space in memory
* @str: string
* Return: pointer to an array of chars
*/

char *_strdup(char *str)
{
	char *string;
	unsigned int x, y;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		;

	string = (char *)malloc(sizeof(char) * (x + 1));

	if (string == NULL)
		return (NULL);

	for (y = 0; y <= x; y++)
		string[y] = str[y];

	return (string);
}

#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars
* @size: size of the array
* @c: stored car
* Return: pointer of an array of chars
*/

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int z;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(c) * size);

	if (ch == NULL)
		return (NULL);

	for (z = 0; z < size; z++)
		ch[z] = c;

	return (ch);
}

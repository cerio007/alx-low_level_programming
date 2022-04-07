#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - concatenate two strings
* @s1: first string
* @s2: second string
* @n: number of bytes
* Return: return pointer to allocated memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *so;
	unsigned int as1, as2, aso, z;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (as1 = 0; s1[as1] != '\0'; as1++)
		;

	for (as2 = 0; s2[as2] != '\0'; as2++)
		;

	if (n > as2)
		n = as2;

	aso = as1 + n;

	so = malloc(aso + 1);

	if (so == NULL)
		return (NULL);

	for (z = 0; z < aso; z++)
		if (z < as1)
			so[z] = s1[z];
		else
			so[z] = s2[z - as1];

	so[z] = '\0';

	return[so]
}

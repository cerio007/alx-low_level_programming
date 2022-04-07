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
	char *concat;
	unsigned int ys1, ys2, yconcat, z;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ys1 = 0; s1[ys1] != '\0'; ys1++)
		;

	for (ys2 = 0; s2[ys2] != '\0'; ys2++)
		;

	if (n > ys2)
		n = ys2;

	yconcat = ys1 + n;

	concat = malloc(yconcat + 1);

	if (concat == NULL)
		return (NULL);

	for (z = 0; z < yconcat; z++)
		if (z < ys1)
			concat[z] = s1[z];
		else
			concat[z] = s2[z - ys1];

	concat[z] = '\0';

	return(concat);
}

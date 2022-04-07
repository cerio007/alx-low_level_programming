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
	unsigned int l1, l2, z;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;

	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	if (n > l2)
		n = l2;


	concat = malloc(sizeof(char) * (l1 + n + 1));

	if (concat == NULL)
		return (NULL);

	for (z = 0; z < l1; z++)
		if (z < l1)
			concat[z] = s1[z];
		else
			concat[z] = s2[z - l1];

	concat[z] = '\0';

	return(concat);
}

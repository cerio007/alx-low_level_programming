#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

	l1 = s1 == NULL ? 0 : strlen(s1);
	l2 = s2 == NULL ? 0 : strlen(s2);
	n = n > l2 ? l2 : n;

	concat = malloc(sizeof(char) * (l1 + n + 1));

	if (concat == NULL)
		return (NULL);

	for (z = 0; z < l1; z++)
		concat[z] = s1[z];

	for (z = 0; z < n; z++)
		concat[l1 + 1] = s2[z];

	concat[l1 + 1] = '\0';

	return(concat);
}

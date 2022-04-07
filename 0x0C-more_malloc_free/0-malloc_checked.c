#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *malloc_checked - allocates memory if status fails,
* status value is equal to 98
* @b: number of bytes allocated
* Return: return pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	char *p;
	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}

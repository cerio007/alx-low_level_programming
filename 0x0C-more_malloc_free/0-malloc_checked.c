#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - program that allocates memory
* @b: number of bytes allocated
* Return: return pointer to allocated memory
* if failed, status value is equal to 98
*/

void *malloc_checked(unsigned int b)
{
	char *p;
	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}

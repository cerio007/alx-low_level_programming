#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: amount of the arguments
 * Return: sum of its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);


	for (i = 0; i < n; i++)

	return (sum);
}

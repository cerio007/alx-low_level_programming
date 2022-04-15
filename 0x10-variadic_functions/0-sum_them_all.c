#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: amount of the arguments
 * Return: sum of its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}

#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    _putchar(sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    _putchar(sum);
    return (0);
}

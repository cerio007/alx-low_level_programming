#include "main.h"
#include <stdio.h>

/**
* square_root - returns the natural square root of a number
* @n: input number
* @c: iterator
* Return: square root or -1
*/

int square_root(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + square_root(n, c + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: inpit number
*Return: the natural square root of a number
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if ( n == 1)
		return (1);
	else
		return (square_root(n, 2));
}

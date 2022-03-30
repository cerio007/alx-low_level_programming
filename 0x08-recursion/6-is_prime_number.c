#include "main.h"
#include <stdio.h>

/**
* prime_number - detects if an inputted input is a prime number
* @n: input number
* @c: iterator
* Return: returns 1 if n is a prime number and 0 if not
*/

int prime_number(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + prime_number(n, c +1));
}

/**
* is_prime_number - detects if an inputted integer is a prime number
* @n: input number
* Return: return 1 if it's a prime number and 0 if not
*/

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_number(n, 2));
}

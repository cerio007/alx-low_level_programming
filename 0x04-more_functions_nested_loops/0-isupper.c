#include "main.h"

/**
 * isupper - checks if letter is uppercase
 * @c: Input character
 * Return: 1 if an uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

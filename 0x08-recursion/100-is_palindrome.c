#include "main.h"
#include <stdio.h>

/**
*_strlen_recursion - gets the length of a string
* @s: string
* Return: length of a string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
* comparism - compares each character of the string
* @s: string
* @c1: smallest iterator
* @c2: biggest iterator
* Return: 0
*/

int comparism(char *s, int c1, int c2)
{
	if (*(s + c1) == *(s + c2))
	{
		if (c1 == c2 || c1 == c2 + 1)
			return (1);
		return (0 + comparism(s, c1 + 1, c2 - 1));
	}
	return (0);
}

/**
* is_palindrome - detects if a string is a palindrome
* @s: string
* Return: return 1 if it's a palindrome ans 0 if not
*/

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparism(s, 0, _strlen_recursion(s) - 1));
}

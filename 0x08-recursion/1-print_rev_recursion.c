#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion - prints srring in revwrse
* @s: string
* Return: no return

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
	else
		_putchar('\n');
}

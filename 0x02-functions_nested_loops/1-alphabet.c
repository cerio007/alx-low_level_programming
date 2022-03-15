#include <stdio.h>
#include "main.h"

/**
 * main - main entry
 * Description: Print lowercase alphabets.
 * Return: Always 0
 */
int print_alphabet(void)
{
	char h;
	
	h = 'a';
	
	while (h <= 'z')
	{
		_putchar(h);
		h++;
	}

	_putchar('\n');

	return (0);
}

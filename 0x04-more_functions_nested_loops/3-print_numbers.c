#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * followed by new line
 * Return: Always 0
 */
void print_numbers(void)
{
	int i;

	for (i = -1; i < 9; i++)
	{
		_putchar(i + '1');
	}
	
	_putchar('\n');

	return (0);
}

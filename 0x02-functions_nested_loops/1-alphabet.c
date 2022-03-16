#include <stdio.h>

/**
 * main - main entry
 * Description: Print lowercase alphabets.
 * Return: Always 0
 */
void print_alphabet(void)
{	
	int h;
	
	for (h = 97; h <= 122; h++)
	{
		_putchar(h);
	}

	_putchar('\n');
}

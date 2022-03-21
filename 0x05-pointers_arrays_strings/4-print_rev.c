#include "main.h"

/**
 * print_rev - print a strinf in reverse followed by new line
 * @s: inpit string
 * Retuen: no return
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break++;
		count++;
	}
	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}

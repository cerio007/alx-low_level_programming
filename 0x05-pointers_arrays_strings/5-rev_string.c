#include "main.h"

/**
 * rev_string - reverse a string
 * @s: input string
 * Retuen: no return
 */
void rev_string(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
		_putchar(s[count]);
}

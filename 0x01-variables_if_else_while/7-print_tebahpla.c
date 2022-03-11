#include <stdio.h>

/**
 * main - main block
 * Description: Print all lower alphabet in reverse order.
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)

		putchar(c);

	putchar('\n');

	return (0);
}

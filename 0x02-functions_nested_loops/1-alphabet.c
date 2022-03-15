#include <stdio.h>

/**
 * main - main entry
 * Description: Print lowercase alphabets.
 * Return: Always 0
 */
int main(void)
{
	char print_alphabet();
	int p;

	for (p = 0; p < 26; p++)
		putchar(print_alphabet());
	putchar('\n');

	return (0);
}

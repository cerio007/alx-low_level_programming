#include <stdio.h>

/**
 * main - main entry
 * Description: Print lowercase alphabets.
 * Return: Always 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int p;

	for (p = 0; p < 26; p++)
		putchar(alp[26]);
	putchar('\n');

	return (0);
}

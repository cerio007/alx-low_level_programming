#include <stdio.h>

/**
 * main - Prints the lower case alphabets.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int z;

	for (z = 0; z < 26; z++)
		putchar(alp[z]);
	putchar('\n');
	return (0);
}

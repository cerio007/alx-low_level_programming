#include <main.h>

/**
* _strchr - locates a character in a string
* @s: string
* @c: character
* Return: pointer to the first occurrence of the character c
*/

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != NULL; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);

	return (NULL);
}

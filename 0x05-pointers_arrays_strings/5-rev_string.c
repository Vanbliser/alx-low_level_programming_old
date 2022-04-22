#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: the string first character
 */
void rev_string(char *s)
{
	int i = 0;
	int tmp;
	int len = _strlen(s);

	for (--len; i <= len ; ++i)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len);
		*(s + len) = tmp;
		--len;
	}
}

/**
 * _strlen - a function that returns the length of a string.
 * @s: pointer to a string
 *
 * Return: returns the length of the string as an int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; ++i)
	{
	}
	return (i);
}

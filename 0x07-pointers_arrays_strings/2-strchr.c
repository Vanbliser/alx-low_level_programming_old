#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: the string
 * @c: the character
 *
 * Return: Returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; ++i)
	{
		if (c == *(s + i))
			break;
	}
	return (&s[i]);
}

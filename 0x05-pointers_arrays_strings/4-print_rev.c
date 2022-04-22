#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: the string
 */
void print_rev(char *s)
{
	int i;
	char a;

	for (i = 0; *(s + i) != '\0'; ++i)
	{
	}
	for (--i; i >= 0; --i)
	{
		a = *(s + i);
		_putchar(a);
	}
	_putchar('\n');
}

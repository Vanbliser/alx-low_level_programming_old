#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: the string to print
 */
void _puts(char *str)
{
	int i;
	char a;

	for (i = 0; *(str + i) != '\0'; ++i)
	{
		a = *(str + i);
		_putchar(a);
	}
	_putchar('\n');
}

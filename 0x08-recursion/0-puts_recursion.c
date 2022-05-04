#include "main.h"

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		char a = *s;
		_putchar(a);
		s++;
		_puts_recursion(s);
	}
}

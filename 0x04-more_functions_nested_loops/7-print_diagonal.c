#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: length of the line
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; ++i)
		{
			for (j = 2; j <= i; ++j)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

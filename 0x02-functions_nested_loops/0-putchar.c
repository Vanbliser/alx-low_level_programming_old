#include <unistd.h>
#include "main.h"

/**
 * main - Write a program that prints _putchar, followed by a new line.
 *
 * Return: return 0 in successful completion
 */
int main(void)
{
	char length[10] = "_putchar";
	int i;

	for (i = 0; i < 8; ++i)
	{
		_putchar(length[i]);
	}
	_putchar('\n');
	return (0);
}

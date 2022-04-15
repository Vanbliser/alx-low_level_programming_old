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

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

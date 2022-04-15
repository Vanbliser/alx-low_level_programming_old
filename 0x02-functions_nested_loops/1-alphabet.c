#include "main.h"

/**
 * main - Write a function that prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: Int 0 in success
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; ++a)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}

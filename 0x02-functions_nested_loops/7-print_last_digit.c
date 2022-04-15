#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * Prototype: int print_last_digit(int);
 * @i: the digit
 *
 * Return: Returns the value of the last digit
 */
int print_last_digit(int i)
{
	int mod;

	if (i < 0)
		i *= -1;
	mod = 48 + i % 10;
	_putchar(mod);
	return (mod);
}

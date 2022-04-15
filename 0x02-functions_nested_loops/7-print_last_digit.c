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
	int last_digit;
	int int_char;

	if (i < 0)
		i *= -1;
	last_digit = i % 10;
	int_char = 48 + last_digit;
	_putchar(int_char);
	return (last_digit);
}

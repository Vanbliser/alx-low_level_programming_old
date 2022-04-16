#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * The numbers must be separated by comma, followed by a space
 *
 * Description: You are allowed to use the standard library
 * You are not allowed to use any other library (You can’t use GMP etc…)
 * You are not allowed to use long long, malloc, pointers, arrays/tables,
 * or structures
 * You are not allowed to hard code any Fibonacci number (except for 1 and 2)
 * Return: return 0 on success
 */
int main(void)
{
	int i;
	long double number;

	long double a = 0;
	long double b = 1;
	for (i = 1; i <= 98; ++i)
	{
		number = a + b;
		print_number(number);
		if (i == 98)
			break;
		_putchar(',');
		_putchar(' ');
		a = b;
		b = number;
	}
	_putchar('\n');
	return (0);
}

/**
 * print_digits - a function that prints the digits of a number
 * @d: the number
 *
 * Description: a function that prints the digits of a number
 */
void print_number(long double d)
{
	int n = num_of_digit(d);
	char digits[32];
	unsigned long int tmp = (unsigned long int)(d);
	int i;

	for (i = 0; i < n; ++i)
	{
		digits[i] = 48 + tmp % 10;
		tmp /= 10;
	}
	for (i = n - 1; i >= 0; --i)
	{
		_putchar(digits[i]);
	}
}

/**
 * no_of_digit - Return the number of digits in a number i
 * @i: the number i
 *
 * Description: return the number of digits
 * Return: return the number of digits as int
 */
int num_of_digit(long double i)
{
	int a = 1;
	unsigned long int b = (unsigned long int)(i);

	while (b >= 10)
	{
		b /= 10;
		++a;
	}
	return (a);
}

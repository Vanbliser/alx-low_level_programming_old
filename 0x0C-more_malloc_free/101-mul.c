#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that multiplies two positive numbers.
 * Usage: mul num1 num2
 * num1 and num2 will be passed in base 10
 * Print the result, followed by a new line
 * If the number of arguments is incorrect, print Error, 
 * followed by a new line, and exit with a status of 98
 * num1 and num2 should only be composed of digits. If not, print Error,
 * followed by a new line, and exit with a status of 98
 * You are allowed to use more than 5 functions in your file
 * @argc: the number of arguments passed to the program
 * @argv: an array containing the arguments passed to the program
 *
 * Return: return 0 on success
 */
int main(int argc, char **argv)
{
	unsigned int i, j, p, k, x, y, z, mul, val, rem = 0, l1, l2, **pt1;
	char *int1, *int2, ans = 0;

	if (argc > 3 || _is_not_digit(argv[1]) || _is_not_digit(argv[2]))
		error();
	l1 = length(argv[1]);
	l2 = length(argv[2]);
	int1 = (l1 >= l2) ? argv[1] : argv[2];
	int2 = (l1 >= l2) ? argv[2] : argv[1];
	l1 = length(int1);
	l2 = length(int2);
	x = l2 - 1;
	y = l1 - 1;
	k = l1 + l2;
	z = k;
	p = 0;

	pt1 = malloc(sizeof(char *) * (l2 + 1));
	for (i = 0; i <= l2; ++i)
		*(pt1 + i) = calloc(l1 + l2 + 1, sizeof(unsigned int));

	printf("l1 = %u, l2 = %u, k = %u, x = %u, y = %u\n", l1, l2, k, x, y);

	for (i = 0; i < l2; ++i)
	{
		printf("\nstart x=%u\n", x);
		multiply(*(pt1 + i), l1, l2, int1, int2, &x, &y, z, &p);
		z--;
	}

	addition(pt1, k, l2);

	for (i = 0; i <= l2; ++i)
	{
		for (j = 0; j <= k; ++j)
		{
			printf("%u", *(*(pt1 + i) + j));
		}
		printf("\n");
	}
	
	printf("\n");
	return (0);
}

void addition(unsigned int **pt1, unsigned int k, unsigned int l2)
{
	unsigned int i, j, l = k, ans, add = 0, rem = 0;

	for (i = 0; i <= k; ++i)
	{
		for (j = 0; j < l2; ++j)
		{
			add += *(*(pt1 + j) + l);
		}
		rem = add / 10;
		ans = add % 10;
		*(*(pt1 + j) + l) = ans;
		add = rem;
		l--;
	}
}

void multiply(unsigned int *ptr, unsigned  int l1, unsigned  int l2, 
char *int1, char *int2, unsigned int *x, unsigned int *y,
unsigned int z, unsigned int *p)
{
	unsigned int i, mul, val, rem = 0;

	for (i = 1; i <= l1; ++i)
	{
		printf("entered: x=%u, y=%u\n", *x, *y);
		printf("int1=%c int2=%c\n", int1[*y], int2[*x]);
		mul = (_atoi(int2[*x]) * _atoi(int1[*y])) + rem;
		rem = mul / 10;
		val = mul % 10;
		printf("mul=%u, rem=%u, val=%u\n", mul, rem, val);
		*(ptr + z--) = val;
		printf("%u\n", *(ptr + (z + 1)));
		--*y;
	}
	*(ptr + z) = rem;
	printf("%u\n", *(ptr + z));
	++p;
	--*x;
	*y = l2 - 1;
	printf("\n");
}

void error(void)
{
	char error[6] = "Error";
	unsigned int i;

	for (i = 0; *(error + i) != '\0'; ++i)
		_putchar(error[i]);
	_putchar('\n');
	exit(98);
}

unsigned int _is_not_digit(char *str)
{
	unsigned int i;

	for (i = 0; *(str + i) != '\0'; ++i)
		if (!(*(str + i) >= 48 && *(str + i) <= 57))
			return (1);

	return (0);
}

unsigned int length(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; ++i)
	;
	return (i);
}

unsigned int _atoi(char ch)
{
	char cha[10] = "0123456789";
	int chi[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, i;
	
	for (i = 0; i <= 8; ++i)
		if (ch == cha[i])
			return (chi[i]);

	return (9);
}

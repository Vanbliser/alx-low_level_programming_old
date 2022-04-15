#include <stdio.h>

/**
 * main - Write a program that prints all possible combinations
 * of two two-digit numbers.
 *
 * Description: The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar eight times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: Return int 0 on successful completion
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;
	int _99 = 49;
	int _999 = 48;
	int lth = 49;
	int kth = 48;

	for (i = 48; i <= 57; ++i)
	{
		for (j = 48; j <= 57; ++j)
		{
			for (k = kth; k <= 57; ++k)
			{
				for (l = lth; l <= 57; ++l)
				{
					putchar((char)(i));
					putchar((char)(j));
					putchar(' ');
					putchar((char)(k));
					putchar((char)(l));
					if ((i == 57) && (j == 56) && (k == 57) && (l == 57))
						break;
					putchar(',');
					putchar(' ');
				}
				if ((k >= 57) && (l >= 57) && (_99 <= 57))
				{
					lth = ++_99;
				}
				else
				{
					lth = 48;
					if (_99 > 57)
						_99 = 48;
				}
				if ((i == 57) && (j == 56) && (k == 57) && (l == 57))
					break;
			}
			if ((j >= 57) && (k >= 57) && (l >= 57) && (_999 <= 57))
			{
				kth = ++_999;
			}
			else
			{
				if (_999 > 57)
					_999 = 48;
			}
			if ((i == 57) && (j == 56) && (k == 57) && (l == 57))
				break;
		}
		if ((i == 57) && (j == 56) && (k == 57) && (l == 57))
			break;
	}
	putchar('\n');
	return (0);
}

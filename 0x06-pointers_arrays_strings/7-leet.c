#include "main.h"
#include <stdio.h>
/**
 * leet - a function that encodes a string into 1337.
 * @str: the string to encode
 *
 * Description: Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * You can only use one if in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 * Return: the encoded string
 */
char *leet(char *str)
{
	int i;
	int j;
	char x;
	char a[6] = {'a', 'e', 'o', 't', 'l', '\0'};
	char A[6] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char b[6] = {'4', '3', '0', '7', '1', '\0'};

	for (i = 0; *(str + i) != '\0'; ++i)
	{
		x = *(str + i);
		for (j = 0; j <=4; ++j)
		{
			if (x == *(a + j) || x == *(A + j))
			{
				*(str + i) = *(b + j);
				break;
			}
		}
	}
	return (str);
}

#include "main.h"
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
	int i = 0;
	int j;
	char a[] = "aeotl";
	char A[] = "AEOTL";
	char b[] = "43071";
	/*
	for (i = 0; *(str + i) != '\0'; ++i)
	{
		x = *(str + i);
		for (j = 0; j <= 4; ++j)
		{
			if (x == a[j] || x == A[j])
			{
				*(str + i) = b[j];
				break;
			}
		}
	}
	*/
	while (*(str + i) != '\0')
	{
		j = 0;
		while (j <= 4)
		{
			if (*(str + i) == *(a + j) || *(str + i) == *(A + j))
			{
				*(str + i) = *(b + j);
				break;
			}
			++j;
		}
		++i;
	}
	return (str);
}

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
 * You can only use one if statement and two loop statements in your code.
 * You are not allowed to use switch and ternary operation
 * Return: the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char a[6] = "aeotl";
	char b[6] = "43071";

	i = 0;
	while (*(str + i) != '\0')
	{
		j = 0;
		while (j <= 4)
		{
			if (*(str + i) == *(a + j) || *(str + i) == *(a + j) - 32)
			{
				*(str + i) = *(b + j);
			}
			++j;
		}
		++i;
	}
	return (str);
}

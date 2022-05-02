#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @str: the string to encode
 *
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

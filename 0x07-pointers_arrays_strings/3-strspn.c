#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the string
 * @accept: the substring
 *
 * Return: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;
	unsigned int sum = 0;
	unsigned int is_inside = 0;

	for (i = 0; *(s + i) != '\0'; ++i)
	{
		for (j = 0; *(accept + j) != '\0'; ++j)
		{
			if (*(s + i) == *(accept + j))
			{
				++count;
				is_inside = 1;
				break;
			}
		}
		if (is_inside == 0)
		{
			if (count >= sum)
				sum = count;
			count = 0;
		}
		is_inside = 0;
	}
	return (sum);
}

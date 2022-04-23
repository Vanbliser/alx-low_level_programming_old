#include "main.h"
/**
 * _atoi -  a function that convert a string to an integer.
 * @s: the string to be converted
 *
 * Return: Return the converted integer
 */
int _atoi(char *s)
{
	int i;
	int j = 0;
	int ans = 0;
	int sign = 1;

	for (i = 0; *(s + i) != '\0'; ++i)
	{
		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			++j;
			ans = (ans * 10) + (int)(*(s + i));
		}
		if (*(s + i) == 45)
			sign = sign * -1;
		if (*(s + i) == 43)
			sign = sign * 1;
		if ((j > 0) && (*(s + i) == ' ' || *(s + i) == '	'))
			break;
	}
	return (sign * ans);
}

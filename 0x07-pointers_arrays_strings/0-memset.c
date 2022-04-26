#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * Returns a pointer to the memory area s
 * @s: The memory area
 * @b: the constant byte
 * @n: number of byte
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i <= n; ++i)
	{
		if (i == n)
		{
			*(s + i) = '\0';
		}
		else
		{
			*(s + i) = b;
		}
	}
	return (*s);
}

#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * function copies n bytes from memory area src to memory area dest
 * @dest: destination
 * @src: source
 * @n: n bytes to copy
 *
 * Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

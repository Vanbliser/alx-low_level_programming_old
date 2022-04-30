#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}


unsigned int is_equal(char *str, char *strr)
{
	int i;

	for (i = 0; *(str + i) != '\0'; ++i)
	{
		if (*(str + i) != *(strr + i))
			return (0);
	}
	return (1);
}
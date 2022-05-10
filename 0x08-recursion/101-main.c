#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = wildcmp("holberton-holberton.c", "holbe*rton.c");
    printf("%d\n", r);
    return (0);
}

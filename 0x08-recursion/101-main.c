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

    r = wildcmp("main.c", "*.c");
    printf("1 %d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("2 %d\n", r);
    r = wildcmp("main.c", "main.c");
    printf("3 %d\n", r);
    r = wildcmp("main.c", "m*c");
    printf("4 %d\n", r);
    r = wildcmp("main.c", "ma********************************c");
    printf("5 %d\n", r);
    r = wildcmp("main.c", "*");
    printf("6 %d\n", r);
    r = wildcmp("main.c", "***");
    printf("7 %d\n", r);
    r = wildcmp("main.c", "m.*c");
    printf("8 %d\n", r);
    r = wildcmp("main.c", "**.*c");
    printf("9 %d\n", r);
    r = wildcmp("main-main.c", "ma*in.c");
    printf("10 %d\n", r);
    r = wildcmp("main", "main*d");
    printf("11 %d\n", r);
    r = wildcmp("abc", "*b");
    printf("12 %d\n\n", r);
    r = wildcmp("holberton.c", "*h*o*l*b*e*r*t*o*n*.*c*");
    printf("13 %d\n", r);
    r = wildcmp("holberton-holberton.c", "holbe*rton.c");
    printf("14 %d\n", r);
    return (0);
}

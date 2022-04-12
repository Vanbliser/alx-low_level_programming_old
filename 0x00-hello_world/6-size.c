#include <stdio.h>

/**
* main - Start of program execution
*
* Description: print the sizes of various types in C.
* Return: return int 0 on successful completion
*/
int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long int)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long int)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long int)sizeof(a));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long int)sizeof(b));
	printf("Size of a float: %lu byte(s)\n", (unsigned long int)sizeof(f));
	return (0);
}

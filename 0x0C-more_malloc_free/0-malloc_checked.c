#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - a function that allocates memory using malloc.
 * if malloc fails, the malloc_checked function should cause normal process
 * termination with a status value of 98
 * @b: the size of the memory
 * 
 * Return: Returns a pointer to the newly created memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(sizeof(b));

	if (ptr == NULL || b == INT_MAX)
	{
		exit (98);
	}
	
	return (ptr);
}

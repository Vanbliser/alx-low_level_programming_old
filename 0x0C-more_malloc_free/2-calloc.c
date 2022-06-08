#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * The _calloc function allocates memory for an array of nmemb elements of size
 * bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero. If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 * @nmemb: number of elements
 * @size: the size of the individual elements
 *
 * Return: return a pointer to the memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(size) * nmemb);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}

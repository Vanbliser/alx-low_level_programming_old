#include "function_pointers.h"
/**
 * array_iterator -  a function that executes a function given as a parameter
 * on each element of an array. where size is the size of the array
 * and action is a pointer to the function you need to use
 * @array: the array containing functions parameter
 * @size: the size of the array
 * @action: a function pointer to the function that will be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!(array == NULL || action == NULL))
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

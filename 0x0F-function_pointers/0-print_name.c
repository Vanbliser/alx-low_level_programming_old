#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 * @name: A pointer to the string name to be printed
 * @f: a function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	} else
	{
		f(name);
	}
}

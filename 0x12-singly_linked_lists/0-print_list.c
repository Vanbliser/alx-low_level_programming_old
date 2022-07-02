#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list.
 * Return the number of nodes. If str is NULL, print [0] (nil).
 * You are allowed to use printf
 * @h: pointer to the list_t list
 *
 * Return: return the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		n++;
	}
	return (n);
}

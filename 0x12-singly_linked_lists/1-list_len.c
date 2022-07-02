#include "lists.h"
/**
 * list_len - a function that returns the number of elements in a linked list_t
 * list.
 * @h: a pointer to the linked list_t
 *
 * Return: return the number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int cnt = 0;

	tmp = h;
	while (tmp)
	{
		tmp = tmp->next;
		cnt++;
	}

	return (cnt);
}

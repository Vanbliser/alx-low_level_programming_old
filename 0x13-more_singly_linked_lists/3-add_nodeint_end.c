#include "lists.h"
/**
 * @add_nodeint_end - a function that adds a new node at the end of a
 * listint_t list.
 * @head: a pointer to a pointer to a listint_t list
 * @n: an integer value
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while ((*head)->next != NULL)
			(*head) = (*head)->next;
		(*head)->next = new;
	}
	return (*head);
}

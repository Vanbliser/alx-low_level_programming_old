#include "lists.h"
/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * str needs to be duplicated. You are allowed to use strdup
 * @head: pointer to a pointer to a list_t
 * @str: a string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int length = 0, i;
	list_t *new;

	for(i = 0; *(str + i) != '\0'; ++i)
		++length;
	
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = length;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

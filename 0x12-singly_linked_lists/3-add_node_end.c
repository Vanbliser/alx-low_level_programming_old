#include "lists.h"
/**
 * add_node_end -  a function that adds a new node at the end of a list_t list.
 * str needs to be duplicated. You are allowed to use strdup
 * @head: pointer to a pointer to a list_t list
 * @str: a string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list_t_ptr, *tmp_ptr;
	size_t length_of_string = 0;

	list_t_ptr = malloc(sizeof(list_t));
	if (list_t_ptr == NULL)
		return (NULL);

	while (str[length_of_string])
	{
		length_of_string++;
	}

	list_t_ptr->str = strdup(str);
	list_t_ptr->len = length_of_string;
	list_t_ptr->next = NULL;
	tmp_ptr = *head;

	if (tmp_ptr == NULL)
	{
		*head = list_t_ptr;
	}
	else
	{
		while (tmp_ptr->next != NULL)
			tmp_ptr = tmp_ptr->next;
		tmp_ptr->next = list_t_ptr;
	}

	return (*head);
}

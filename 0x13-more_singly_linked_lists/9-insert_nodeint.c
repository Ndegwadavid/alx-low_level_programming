#include "lists.h"
#include <stdlib.h>
/**
 * inset_nodeint_at_index - insert a new node at a given position
 * @head: pointer to head of linked list
 * @idx: index to insert new node
 * @n: new nodes's data
 * Return: address of new node, NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 0;
	listint_t *new_node, *tmp;

	/*empty pointer*/
	if (head == NULL)
		return (NULL);

	/*malloc and set values for new node*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/*account for idx 0*/
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/*iterate to 1 befor nth index to insert*/
	tmp = *head;
	while (x < (idx - 1))
	{
		tmp = tmp->next;
		x++;

		if (tmp == NULL) /*account for idx out of range*/
		{
			free(new_node);
			return (NULL);
		}
	}

	/*linking stuff here*/
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}

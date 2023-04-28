#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node, and returns the head nodes's data
 * @head: linked list
 * Return: deleted head node's data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL) /*account for no linked list*/
		return (0);

	tmp = *head;

	data = tmp->n; /*saves data*/

	*head = tmp->next; /*link head to the next node*/
	free(tmp);

	return (data);
}

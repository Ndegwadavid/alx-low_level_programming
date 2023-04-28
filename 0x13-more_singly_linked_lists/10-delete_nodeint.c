#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delete a node at a given position
 * @head: pointer to head pointer of linked list
 * @index: index to delete
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tmp, *tmp2;

	/*empty list*/
	if (*head == NULL)
		return (-1);

	tmp = *head;

	/*deleting begginning node*/
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	/*iterate tmp to idx prior to idx we are to delete*/
	while (x < (index - 1) && tmp != NULL)
	{
		tmp = tmp->next;
		x++;
	}

	/*account for  idx out of range*/
	if (x != (index - 1) || tmp->next == NULL)
		return (-1);

	/*link prio idx befor delete*/
	/*frigile part here*/
	tmp2 = tmp->next;
	tmp->next = (tmp->next)->next;
	free(tmp2);

	return (1);
}

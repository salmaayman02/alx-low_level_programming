#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get node
 * @head: header of the list
 * @index: index of list
 *
 * Description: delete first node
 *
 * Return: node index
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	tmp = head;

	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
	}
	if (!tmp)
		return ('\0');
	else
		return (tmp);
}

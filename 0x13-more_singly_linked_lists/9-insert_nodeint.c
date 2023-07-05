#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * insert_nodeint_at_index - insert
 * @head: header of the list
 * @idx: index
 * @n: new integr
 *
 * Description: insert at index;
 *
 * Return: the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_, *tmp;
	unsigned int l = 0, i;

	tmp = *head;
	while (tmp)
	{
		l++;
		tmp = tmp->next;
	}

	if (idx > l)
		return (NULL);

	new_ = malloc(sizeof(listint_t));
	if (!new_)
		return (NULL);
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	new_->n = n;
	tmp = *head;

	for (i = 0; i < idx - 1; i++)
	{
		tmp = tmp->next;
	}
	new_->next = tmp->next;
	tmp->next = new_;
	return (new_);

}

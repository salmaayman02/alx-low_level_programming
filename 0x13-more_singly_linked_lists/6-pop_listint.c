#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - pop
 * @head: header of the list
 *
 * Description: delete first node
 *
 * Return: first node
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int x;

	if (!head || !*head)
	return (0);

	tmp = *head;
	x = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (x);
}

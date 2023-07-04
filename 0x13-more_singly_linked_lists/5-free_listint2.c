#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free
 * @head: header of the list
 *
 * Description: delete all list from memory
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	head = '\0';
}

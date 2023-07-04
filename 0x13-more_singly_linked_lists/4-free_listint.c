#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free
 * @head: header of the list
 *
 * Description: delete all list from memory
*/

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

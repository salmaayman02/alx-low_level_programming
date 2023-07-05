#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * sum_listint - sum
 * @head: header of the list
 *
 * Description: sum all list elements
 *
 * Return: the sum
*/

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (!head)
		return (0);
	tmp = head;
	while (tmp)
	{
		sum = tmp->n + sum;
		tmp = tmp->next;
	}
	free(tmp);
	return (sum);
}

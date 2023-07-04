#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add
 * @head: header of the list
 * @n: new element
 *
 * Description: add inf at end of the list
 *
 * Return: the list withe new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *_new, *tmp;

	_new = malloc(sizeof(listint_t));

	if (_new == 0)
		return (NULL);

	_new->n = n;
	_new->next = NULL;


	tmp = *head;

	if (*head == NULL)
		*head = _new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = _new;
	}

	return (*head);
}

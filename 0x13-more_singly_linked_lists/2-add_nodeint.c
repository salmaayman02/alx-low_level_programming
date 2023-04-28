#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add
 * @head: head of the list
 * @n: new element
 *
 * Description: add inf at front of the list
 *
 * Return: the list withe new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *_new;

	_new = malloc(sizeof(listint_t));

	if (_new == 0)
		return (NULL);

	_new->n = n;

	_new->next = *head;
	*head = _new;
	return (*head);
}


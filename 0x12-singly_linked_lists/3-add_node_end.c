#include "lists.h"
#include <string.h>
#include<stdio.h>
#include <stdlib.h>

/**
 * add_node_end - add
 * @str: new info
 * @head: the list
 *
 * Description: add new node to the list
 *
 * Return: addres of list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *_new, *temp;
	unsigned int n = 0;

	_new = malloc(sizeof(list_t));

	if (_new == 0)
		return (NULL);

	_new->str = strdup(str);

	while (str[n])
		n++;
	_new->len = n;
	_new->next = NULL;

	temp = *head;
	if (temp == NULL)
		*head = _new;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = _new;
	}

	return (*head);
}

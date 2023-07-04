#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print
 * @h: header of list we need to print
 *
 * Description: print each element of list
 *
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}
	return (s);
}

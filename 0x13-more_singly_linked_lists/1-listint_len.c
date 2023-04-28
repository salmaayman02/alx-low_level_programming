#include "lists.h"

/**
 * listint_len - size
 * @h: header of the list
 *
 * Description: detrmine the size of list
 *
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}

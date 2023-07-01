#include <stddef.h>
#include "lists.h"

/**
 * list_len - size
 *
 * @h: the list
 *
 * Description: detrmine the size of list
 *
 * Return: size of list
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

#include "lists.h"
#include <stddef.h>
#include<stdio.h>

/**
 * print_list - print list
 *
 * @h: the list we will print
 *
 * Description: print each element in the list
 *
 * Return: size of list
*/
size_t print_list(const list_t *h)
{
	int i;
	size_t s = 0;
	char *p;

	while (h)
	{
		i = 0;
		p = h->str;
		if (p == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			while (p[i] != '\0')
				i++;
			printf("[%d] %s\n", i, p);
		}
			h = h->next;
			s++;

	}
	return (s);
}

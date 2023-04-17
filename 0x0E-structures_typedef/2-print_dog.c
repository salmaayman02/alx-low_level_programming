#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dog - dog
 * @d: pointer to dog struct
 *
 * Description: dog attributes
 *
 * Return: no value
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		printf("Name: %s\n", d->name);
		else
		printf("Name: (nil)\n");

		if (d->age != 0)
		printf("Age: %f\n", d->age);
		else
		printf("Age: (nil)\n");

		if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
		else
		printf("Owner: (nil)\n");
	}
}

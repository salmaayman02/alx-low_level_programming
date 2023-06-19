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
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}

#include "dog.h"
/**
 * init_dog - dog
 * @d: pointer to dog struct
 * @name: dog's name
 * @age: dog;s age
 * @owner: dogs owner
 *
 * Description: dog attributes
 *
 * Return: no value
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

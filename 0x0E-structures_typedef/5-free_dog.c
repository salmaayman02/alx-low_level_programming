#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - dog
 * @d: pointer to dog struct
 *
 * Description: free attributes
 *
 * Return: no value
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}


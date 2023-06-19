#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - string length
 * @s: pointer to string
 *
 * Description: get string length
 *
 * Return: int value
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	i++;

	return (i);
}

/**
 * _strcopy - copy string
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Description: copy string in another
 *
 * Return: 1st string
*/
char *_strcopy(char *s1, char *s2)
{
	int j = _strlen(s2);
	int k;

	for (k = 0; k < j; k++)
		s1[k] = s2[k];

	return (s1);
}

/**
 * new_dog - dog
 * @name: dog's name
 * @age: dog;s age
 * @owner: dogs owner
 *
 * Description: make new dog
 *
 * Return: pinter to dog struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || age == 0 || owner == NULL)
	return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == 0)
	{
		return (NULL);
		free(d);
	}

	d->name = malloc(_strlen(name) + 1);
	if (d->name == 0)
	{
		return (NULL);
		free(d->name);
	}

	d->owner = malloc(_strlen(owner) + 1);
	if (d->owner == 0)
	{
		return (NULL);
		free(d->owner);
	}

	d->age = age;
	d->name = _strcopy(d->name, name);
	d->owner = _strcopy(d->owner, owner);

	return (d);
}

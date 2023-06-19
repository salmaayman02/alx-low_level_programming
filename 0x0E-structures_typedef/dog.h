#ifndef DOG_H_INCLUDED
#define DOG_H_INCLUDED

/**
 * struct dog - dog
 * @name: dog's name
 * @age: dog;s age
 * @owner: dogs owner
 *
 * Description: dog attributes
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog struct
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

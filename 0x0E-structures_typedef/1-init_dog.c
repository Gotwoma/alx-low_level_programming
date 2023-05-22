#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: pointer to type dog struct.
 * @name: dog name.
 * @age: dog age.
 * @owner: owner of the dog.
 *
 * Return: pointer to dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

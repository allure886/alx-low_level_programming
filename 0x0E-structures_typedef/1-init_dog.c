#include "dog.h"

/**
 * init_dog - initialises a variable of type struct dog.
 * @d: pointer to struct type dog
 * @name: pointer to char name dog
 * @age: dog age in float
 * @owner: owner
 * Return: no
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

#include "dog.h"

/**
* init_dog - initialize variable of type struct dog.
* @d: pointer to struct dog to be initilized.
* @name: a pointer to the name of the dog.
* @age: the age of the dog.
* @owner: a pointer to the name of the dog's owner.
*
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

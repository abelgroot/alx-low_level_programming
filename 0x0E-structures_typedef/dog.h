#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type describing dog.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 *
 * Description: a structure to hold information about a dog
 * including name, age and owner information.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

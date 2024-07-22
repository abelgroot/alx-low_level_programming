#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* _strlen - Calculates the length of a string.
* @s: The string whose length is to be calculated.
*
* Return: The length of the string.
*/
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
* _strdup - Duplicates a string.
* @s: The string to be duplicated.
*
* Return: A pointer to the duplicated string, or NULL if it fails.
*/
char *_strdup(char *s)
{
	int length = _strlen(s);
	char *dup;

	dup = (char *)malloc(length + 1);
	if (dup == NULL)
		return (NULL);

	for (int i = 0; i < length; i++)
		dup[i] = s[i];
	dup[length] = '\0';

	return (dup);
}

/**
* new_dog - Creates a new dog.
* @name: The name of the new dog.
* @age: The age of the new dog.
* @owner: The owner of the new dog.
*
* Return: A pointer to the new dog_t object, or NULL if it fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy, *owner_copy;

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	name_copy = _strdup(name);
	owner_copy = _strdup(owner);

	if (name_copy == NULL || owner_copy == NULL)
	{
		free(d);
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}

#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calculate the length of string.
 * @str: input string
 *
 * Return: the length of string.
 */

int _strlen(char *str)
{
	int length;

	length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}
/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: pointer to the new dog (dog_t),
* or NULL if it fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy;
	char *owner_copy;
	int i, name_len = 0, owner_len = 0;

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	name_copy = malloc(name_len + 1);
	if (name_copy == NULL)
	{
		free(dog);
		return (NULL);
	}

	owner_copy = malloc(owner_len + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		name_copy[i] = name[i];

	for (i = 0; i <= owner_len; i++)
		owner_copy[i] = owner[i];

	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}


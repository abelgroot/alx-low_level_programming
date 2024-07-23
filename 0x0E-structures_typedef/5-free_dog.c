#include "dog.h"
#include <stdlib.h>

/**
* free_dog - free the allocated memory of the given
* struct dog variable.
* @d: an input dog_t type variable.
*
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if(d->owner != NULL)
			free(d->owner);
		free(d);
	}
}

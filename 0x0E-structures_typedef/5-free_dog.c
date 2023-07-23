#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a struct dog.
 * @d: Pointer to struct dog to free.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		while (d->name)
		{
			free(d->name);
			d->name = NULL;
		}

		while (d->owner)
		{
			free(d->owner);
			d->owner = NULL;
		}

		free(d);
	}
}

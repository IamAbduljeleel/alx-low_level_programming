#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees memory allocated to dog
 * @d: pointer to dog_t
 *
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

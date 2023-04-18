#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog -  A function that frees dogs.
 * @d: Poimter to our dog class
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

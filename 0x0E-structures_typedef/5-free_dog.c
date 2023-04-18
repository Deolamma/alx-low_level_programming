#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free up mem. allocated to dog_t struct
 * @d: free up space allocated to the struct
 * Return: Nothing
 *
 */
void free_dog(dog_t *d)
{
		free(d->name);
		free(d->owner);
		free(d);
}

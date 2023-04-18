#include "dog.h"
#include <stdlib.h>
/**
 * dog_t - this initializes dog struct type
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	int namelen = 0;
	int ownlen = 0;
	dog_t *d;
	
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		namelen++;
	d->name = malloc(sizeof(char) * (namelen + 1));
	d->owner = malloc(sizeof(char) * (ownlen + 1));
	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		d->name[i] = name[i];
	}
	d->name[i] = '\0';
	d->age = age;
	for (i = 0; owner[i] != '\0'; i++)
		ownlen++;
	d->owner = malloc(sizeof(char) * (ownlen + 1));
	if (d->owner == NULL)
		return (NULL);
	for (i = 0; owner[i] != '\0'; i++)
	{
		d->owner[i] = owner[i];
	}
	d->owner[i] = '\0';
	return (d);
}

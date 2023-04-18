#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - this initializes dog struct type
 * @d: this is a new instance of dog;
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i;
	int namelen = 0;
	int ownlen = 0;

	if (name == NULL || owner == NULL)
		return;
	for (i = 0; name[i] != '\0'; i++)
		namelen++;
	d->name = malloc(sizeof(char) * (namelen + 1));
	for (i = 0; name[i] != '\0'; i++)
	{
		d->name[i] = name[i];
	}
	d->name[i] = '\0';
	d->age = age;
	for (i = 0; owner[i] != '\0'; i++)
		ownlen++;
	d->owner = malloc(sizeof(char) * (ownlen + 1));
	for (i = 0; owner[i] != '\0'; i++)
	{
		d->owner[i] = owner[i];
	}
	d->owner[i] = '\0';
}

#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the property of a dog
 * @d: dog struct
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	} else
		printf("Name: %s\n", d->name);
	if (d->age < 0.0)
	{
		printf("age: (nil)\n");
	} else
		printf("age: %.6f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	} else
		printf("Owner: %s\n", d->owner);
}

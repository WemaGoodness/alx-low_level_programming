#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog stats
 * @d: pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("NULL pointer received. Unable to print.\n");
		return;
	}

	d->name = (d->name == NULL) ? "(nil)" : d->name;
	d->owner = (d->owner == NULL) ? "(nil)" : d->owner;

	printf("Name: %s\n", d->name);

	if (d->age <= 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %.6f\n", d->age);
	}

	printf("Owner: %s\n", d->owner);
}


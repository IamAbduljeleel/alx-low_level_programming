#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to the struct
 *
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(*d).name)
			printf("Name: (nil)\n");
		else
			printf("Name: %s;\n", d->name);
		printf("Age: %1f;\n", d->age);

		if (!(d->owner))
			printf("owner: (nil)\n");
		else
			printf("owner: %s;\n", (*d).owner);
	}
}

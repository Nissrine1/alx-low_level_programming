#include <stdio.h>
#include "dog.h"

/**
* print_dog - a dog's struct
*
* @d: a pointer to that struct
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
		printf("Name: (nil)\n");
		else
		printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);
		if (!(d->owner))
		printf("Owner: (nil)\n");
		else
		printf("Owner: %s\n", d->owner);
	}
}

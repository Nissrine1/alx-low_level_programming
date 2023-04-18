#include "dog.h"
#include <stdlib.h>

/**
* init_dog -  initialize a variable of type struct dog
* @d : the dog's struct
* @name: the dog's name
* @age: the dog's age
* @owner: the dog's owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

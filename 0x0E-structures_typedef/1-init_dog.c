#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - initialize a variable of type dog
  * @d: struct name
  * @name: name
  * @age: age
  * @owner: owner of dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

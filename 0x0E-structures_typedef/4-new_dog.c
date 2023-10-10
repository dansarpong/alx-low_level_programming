#include <stdlib.h>
#include "dog.h"

/**
  * new_dog - creates a new dog
  * @name: name
  * @age: age
  * @owner: owner
  * Return: pointer to new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));
	char *name_cpy, *owner_cpy;
	int name_len, owner_len, i;

	if (dog == NULL)
		return (NULL);

	for (name_len = 0; name[name_len] != '\0'; name_len++)
		;
	for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
		;
	name_cpy = malloc(sizeof(char) * name_len);
	if (name_cpy == NULL)
	{
		free(dog);
		return (NULL);
	}
	owner_cpy = malloc(sizeof(char) * owner_len);
	if (owner_cpy == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}


	for (i = 0; name[i] != '\0'; i++)
	{
		name_cpy[i] = name[i];
	}
	for (i = 0; owner[i] != '\0'; i++)
	{
		owner_cpy[i] = owner[i];
	}

	dog->name = name_cpy;
	dog->age = age;
	dog->owner = owner_cpy;

	return (dog);
}

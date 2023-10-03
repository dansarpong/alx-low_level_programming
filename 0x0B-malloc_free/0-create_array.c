#include <stdlib.h>

/**
  * create_array - creates an array of chars, and initializes
  * with a specific char
  * @size: size of char
  * @c: initializing char
  * Return: a pointer to the array
  * or NULL if it fails or size is 0
  */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (ptr == NULL)
		return (NULL);
	*ptr = c;
	return (ptr);
}

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
	unsigned int i = 0;

	if (ptr == NULL || size == 0)
		return (NULL);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

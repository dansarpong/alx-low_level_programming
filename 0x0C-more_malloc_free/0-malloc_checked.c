#include <stdlib.h>

/**
  * malloc_checked - allocates memory using malloc, and if malloc fails
  * should cause normal process termination with a status value of 98
  * @b: size to be allocated
  * Return: pointer to allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}

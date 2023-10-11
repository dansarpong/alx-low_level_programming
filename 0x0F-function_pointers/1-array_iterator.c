#include <stddef.h>
#include "function_pointers.h"

/**
  * array_iterator - execute a function on all elements of an array
  * @array: array
  * @size: size of the array
  * @action: pointer to the function used
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, j = (int)size;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < j; i++)
		action(array[i]);
}

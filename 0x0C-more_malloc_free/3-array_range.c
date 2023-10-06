#include <stdlib.h>

/**
  * array_range - create an array of integers from min to max
  * @min: minimum int to include
  * @max: maximim int to include
  * Return: pointer to result
  */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * (1 + max - min));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		ptr[i] = min;
	return (ptr);
}

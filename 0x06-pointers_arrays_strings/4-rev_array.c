#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers
  * @a: array to reverse
  * @n: number of elements of the array
  */
void reverse_array(int *a, int n)
{
	int i, temp;

	--n;
	for (i = 0; i < n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

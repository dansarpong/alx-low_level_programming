#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: string one, use whole
  * @s2: string two, n bytes max
  * @n: number of bytes of s2 to be used
  * Return: pointer to result
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, len;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; (s2[j] != '\0') && (j < n); j++)
		;
	len = i + j + 1;

	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (k = 0; k < j; k++, i++)
		ptr[i] = s2[k];
	ptr[i] = '\0';

	return (ptr);
}

#include "main.h"

/**
  * string_toupper - change all lowercase letters to a string to uppercase
  * @c: string to check
  * Return: @c
  */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = (c[i] - 'a') + 'A';
	}
	return (c);
}

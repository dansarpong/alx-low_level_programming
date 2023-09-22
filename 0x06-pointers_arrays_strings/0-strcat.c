#include "main.h"

/**
  * _strcat - concatenate two strings
  * @dest: destination array
  * @src: source array
  * Return: a pointer to the resulting string @dest
  */
char *_strcat(char *dest, char *src)
{
	int t, i;
	char c;

	for (t = 0; dest[t] != '\0'; t++)
	{
	}

	for (i = 0; src[i] != '\0'; i++, t++)
	{
		dest[t] = src[i];
	}
	dest[t] = src[i];
	return (dest);
}

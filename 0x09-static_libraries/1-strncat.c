#include "main.h"

/**
  * _strncat - concatenate two strings
  * @dest: destination string
  * @src: source string
  * @n: number of bytes at most to copy
  * Return: @dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int t, i;

	for (t = 0; dest[t] != '\0'; t++)
	{
	}
	for (i = 0; i < n && src[i] != '\0'; i++, t++)
	{
		dest[t] = src[i];
	}
	if (i < n)
		dest[t] = src[i];

	return (dest);
}

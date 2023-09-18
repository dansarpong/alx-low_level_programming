#include "main.h"

/**
  * _strcpy - copy string from source to destination
  * @dest: destination pointer
  * @src: source pointer
  * Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return dest;
}

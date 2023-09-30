#include "main.h"

/**
  * _strlen - find length of string
  * @s: string to determine
  * Return: length of strength (int)
  */
int _strlen(char *s)
{
	int l;
	char c;

	l = 0;
	c = s[l];
	while (c != '\0')
	{
		l++;
		c = s[l];
	}
	return (l);
}

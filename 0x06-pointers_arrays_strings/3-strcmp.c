#include "main.h"

/**
  * _strcmp - compare two strings
  * @s1: first string
  * @s2: second string
  * Return: negative, 0 or positive integer
  * if lesser same or equal respectively
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

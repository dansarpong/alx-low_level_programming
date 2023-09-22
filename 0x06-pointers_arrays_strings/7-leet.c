#include "main.h"

/**
  * leet - encode a string into 1337
  * @s: string to encode
  * Return: @s
  */
char *leet(char *s)
{
	int i, j;
	char l[] = "oOlLeEaAtT";
	char n[] = "0011334477";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = n[j];
				break;
			}
		}
	}
	return (s);
}

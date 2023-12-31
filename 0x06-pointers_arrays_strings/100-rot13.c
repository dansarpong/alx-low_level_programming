#include "main.h"

/**
  * rot13 - encodes a string by rot13
  * @s: string to be encoded
  * Return: @s
  */
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while ((s[i] >= 'a' && s[i] <= 'z') ||
				(s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'a' && s[i] <= 'm') ||
					(s[i] >= 'A' && s[i] <= 'M'))
			{
				s[i] += 13;
				break;
			}
				s[i] -= 13;
		}
		i++;
	}
	return (s);
}

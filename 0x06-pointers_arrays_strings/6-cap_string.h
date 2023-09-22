#include "main.h"

/**
  * cap_string - capitalizes all words of a string
  * @c: string to capitalize
  * Return: @c
  */
char *cap_string(char *c)
{
	int i, j;
	char sep[11];

	sep = ",;.!?\"(){}";
	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0' ; j++)
		{
			if (c[i] == sep[j])
			{
				if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
					c[i + 1] = (c[i + 1] - 'a') + 'A';
			}
		}
	}
	return (c);
}

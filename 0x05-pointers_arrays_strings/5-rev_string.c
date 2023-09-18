#include "main.h"

/**
  * rev_string - reverse a string
  * @s: string to reverse
  */
void rev_string(char *s)
{
	char a, c;
	int l, i;

	for (l = 0; *(s + l) != '\0'; l++)
	{
	}

	for (i = 0, --l; l > i; l--, i++)
	{
		a = s[i];
		c = s[l];
		s[i] = c;
		s[l] = a;
	}
}

#include "main.h"

/**
  * is_separator - check if character is a separator
  * @c: char to check
  * Return: 1 if true, 0 otherwise
  */
int is_separator(char c)
{
	int i;
	char *sep;

	sep = ",;.!?\"(){}";
	for (i = 0; i < 10; i++)
	{
		if (c == sep[i])
			return (1);
	}
	return (0);
}

/**
  * cap_char - capitalize single character
  * @c: char
  * Return: capitalized c
  */
void cap_char(char c)
{
	if (c >= 'a' && c <= 'z')
		return ((c - 'a') + 'A');
}

/**
  * cap_string - capitalizes all words of a string
  * @c: string to capitalize
  * Return: @c
  */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (is_separator(c[i])
				c[i+1] = cap_char(c[i+1]);
	}
	return (c);
}

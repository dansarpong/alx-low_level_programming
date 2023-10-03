#include <stdlib.h>

/**
  * _strlen_recursion - find the length of a string
  * @s: string
  * Return: length of string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}


/**
  * _strdup - allocate space and copy string to space
  * @str: string to be copied
  * Return: a pointer to the newly allocated space if successful
  */
char *_strdup(char *str)
{
	unsigned int i, len = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	len = _strlen_recursion(str);
	ptr = malloc((sizeof(char) * len) + 1);
	if (ptr == NULL)
		return (NULL);

	while (i <= len)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}

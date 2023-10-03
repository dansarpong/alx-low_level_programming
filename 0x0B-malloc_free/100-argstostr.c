#include <stdlib.h>

/**
  * argstostr - concatenates all args of program
  * @ac: argument counter
  * @av: argument vector
  * Return: pointer to new string, NULL if otherwise
  */
char *argstostr(int ac, char **av)
{
	int len, i, j;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = len = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = len = 0; i < ac; i++, len++)
	{
		for (j = 0; av[i][j] != '\0'; j++, len++)
			ptr[len] = av[i][j];
		ptr[len] = '\n';
	}
	ptr[len] = '\0';
	return (ptr);
}


/**
  * str_concat - concatenate two strings
  * @s1: first string
  * @s2: second string
  * Return: pointer to concatenattion result, NULL if otherwise
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int len, i;
	char *ptr;

	for (i = 0; s1[i] != NULL; i++)
	{
	}
	len = i;
	for (i = 0; s2[i] != NULL; i++)
	{
	}
	len += i;

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != NULL; i++)
		ptr[i] = s1[i];
	len = i;
	for (i = 0; s2[i] != NULL; i++, len++)
		ptr[len] = s2[i];
	ptr[len] = '\0';
	return (ptr);
}

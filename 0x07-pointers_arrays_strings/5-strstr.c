
/**
  * _strstr - locates a substring
  * @haystack: string to search
  * @needle: substring to find
  * Return: pointer to the beginning of the located bytes
  */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, l;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		l = i;
		for (j = 0; needle[j] != '\0'; j++, l++)
		{
			if (haystack[l] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}

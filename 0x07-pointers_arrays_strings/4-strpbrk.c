
/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: searched string
  * @accept: set of bytes to find
  * Return: pointer to the byte that matches any
  */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, l;

	l = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (s[i] == accept[j])
		{
			l = i;
			break;
		}
	}
	return (l);
}

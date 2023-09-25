
/**
  * _strspn - gets the length of a prefix substring
  * @s: initial string
  * @accept: prefix checker
  * Return: number of bytes of initial bytes
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	n = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (s[i] != accept[j])
			break;
	}
	return (n);
}

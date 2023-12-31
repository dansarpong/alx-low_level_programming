
/**
  * _memset - fills memory with a constant byte
  * @s: memory to be filled
  * @b: constant byte to use
  * @n: number of bytes
  * Return: @s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

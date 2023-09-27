
/**
  * _sqrt - find square root
  * @n: number
  * @i: tester
  * Return: result
  */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	else if ((i * i) > n)
		return (-1);
	else if ((i * i) == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
  * _sqrt_recursion - main recursion finder
  * @n: number
  * Return: square root
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

#include <stdio.h>
#include <stdlib.h>

/**
  * main - a program that adds positive numbers
  * @argc: number of arguments
  * @argv: arguments
  * Return: 0 if successful, 1 if otherwise
  */
int main(int argc, char *argv[])
{
	int res;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (**argv)
	{
		if (**argv < '0' || **argv > '9')
		{
			printf("Error\n");
			return (1);
		}
		res += atoi(**argv);
		**argv++;
	}
	printf("%d\n", res);
	return (0);
}

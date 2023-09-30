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
	int res, num, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	i = 1;
	while (argv[i])
	{
		if (argv[i] < '0' || argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		num = atoi(argv[i]);
		res += num;
		i++;
	}
	printf("%d\n", res);
	return (0);
}

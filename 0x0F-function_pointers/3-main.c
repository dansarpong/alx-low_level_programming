#include "3-calc.h"

/**
  * main - perform simple operations
  * @argc: argument counter
  * @argv: argument vector
  * Return: 0 if successful, other exit status specified by alx
  */
int main(int argc, char *argv[])
{
	int a, b;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%i\n", func(a, b));

	return (0);
}

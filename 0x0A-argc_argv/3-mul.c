#include <stdio.h>

/**
  * main - a program that multiplies 2 numbers
  * @argc: number of arguments
  * @argv: arguments
  * Return: 0
  */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (int)argv[1] * (int)argv[2])
	return (0);
}

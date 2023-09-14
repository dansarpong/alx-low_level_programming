#include <stdio.h>

/**
  * main - print 1 to 100, end with a newline
  * Desc: if number is a multiple of 3, print Fizz
  * if number is a multiple of 5, print Buzz
  * if number is a multiple of 3 and 5, print FizzBuzz
  * Return: 0 (success)
  */

int main(void)
{
	int i, end;

	end = 100;
	for (i = 1; i <= end; i++)
	{
		if (i % 3 ==  0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != end)
			printf(" ");
	}
	printf("\n");
	return (0);
}

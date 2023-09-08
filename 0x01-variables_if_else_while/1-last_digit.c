#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  *main - last digit
  *
  *Description: check for last digit and
  *provide whether greater or less than 5
  *Return - 0 (success)
  */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	printf("Last digit of %d is %d and is",  n, last_digit);
	if (last_digit > 5)
	{
		printf("greater than 5");
	}
	else if (last_digit == 0)
	{
		printf("0");
	}
	else if (last_digit < 6)
	{
		printf("less than 6 and not 0");
	}
	return (0);
}
	

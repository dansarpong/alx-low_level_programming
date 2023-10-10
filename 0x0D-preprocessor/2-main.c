#include <stdio.h>

/**
  * main - print name of the file compiled from
  * Return: 0 if success
  */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}

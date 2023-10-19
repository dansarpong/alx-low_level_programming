#include "lists.h"
#include <stdio.h>

/**
  * first - gets called before main
  */
void first() __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

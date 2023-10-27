#include "main.h"

/**
  * print_binary - prints the binary of a number
  * @n: the number
  */
void print_binary(unsigned long int n)
{
        unsigned long int mask = 1;

        if (n == 0)
        {
                _putchar(n + '0');
                return;
        }

        while (mask <= n)
                mask <<= 1;

        while (mask > 1)
        {
                mask >>= 1;
                _putchar((n & mask) ? '1' : '0');
        }
}

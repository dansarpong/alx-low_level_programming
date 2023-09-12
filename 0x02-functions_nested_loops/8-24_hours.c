#include "main.h"

/**
  * jack_bauer - print every minute of the day
  * Return: void
  */
void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours <= 24; hours++)
	{
		for (minutes = 0; minutes <= 60; minutes++)
		{
			if (hours < 10)
				_putchar('0');
			_putchar(hours + '0');
			_putchar(':');
			if (minutes < 10)
				_putchar('0');
			_putchar(minutes + '0');
			_putchar('\n');
		}
	}
}

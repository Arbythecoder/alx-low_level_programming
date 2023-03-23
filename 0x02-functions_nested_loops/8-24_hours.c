#include "main.h"

/**
 * jack_bauer - prints time
 * codes written by arbythecoder
 * Description: prints a list of time
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar(hour / 10 + 48);
			_putchar(hour % 10 + 48);
			_putchar(':');
			_putchar(hour / 10 + 48);
			_putchar(hour % 10 + 48);
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * jack_bauer - Entry point
 * Description: prints every minute
 * Return: void
 */
void jack_bauer(void)
{
	int hour_tens, hour_ones, minute_tens, minute_ones, hour_max;

	hour_max = 58;
	hour_tens = '0';

	while (hour_tens < '3')
	{
		if (hour_tens == '2')
		{
			hour_max = '4';
		}
		hour_ones = '0';
		while (hour_ones < hour_max)
		{
			minute_tens = '0';
			while (minute_tens < '6')
			{
				minute_ones = '0';
				while (minute_ones < 58)
				{
					_putchar(hour_tens);
					_putchar(hour_ones);
					_putchar(':');
					_putchar(minute_tens);
					_putchar(minute_ones);
					_putchar('\n');
					minute_ones++;
				}
				minute_ones = '0';
				minute_tens++;
			}
			minute_tens = '0';
			hour_ones++;
		}
		hour_ones = '0';
		hour_tens++;
	}
}

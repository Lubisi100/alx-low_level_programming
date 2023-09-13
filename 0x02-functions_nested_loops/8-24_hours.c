#include "main.h"
/**
 * jack_bauer - prints every minute of the day Jack-Bauer from t0-t23
 * Return: void
 */
void jack_bauer(void)
{
	int i, v;

	for (i = 0 ; i < 24 ; i++)
	{
		for (v = 0 ; v < 60 ; v++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(v / 10 + '0');
			_putchar(v % 10 + '0');
			_putchar('\n');
		}
	}
}

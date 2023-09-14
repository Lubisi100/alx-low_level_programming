#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int v;

	for (i = 0 ; i < 10 ; i++)
	{
		for (v = 0 ; v <= 14 ; v++)
		{
			if (v > 9)
				_putchar(v / 10 + '0');
			_putchar(v % 10 + '0');
		}
		_putchar('\n');
	}
}

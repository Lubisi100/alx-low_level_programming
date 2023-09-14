#include "main.h"
#include <stdio.h>
/**
 * print_square - prints a square using #
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, v;

		for (i = 1 ; i <= size ; i++)
		{
			for (v = 1 ; v <= size ; v++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

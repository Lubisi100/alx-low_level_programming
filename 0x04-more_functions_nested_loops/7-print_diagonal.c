#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal
* @n: is the number of times the character \ be printed
* Return: void
*/
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, v;

		for (i = 0 ; i < n ; i++)
		{
			for (v = 0 ; v <= i ; v++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}

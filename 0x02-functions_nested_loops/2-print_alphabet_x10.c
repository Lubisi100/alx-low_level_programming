#include "main.h"
/**
 * print_alphabet_x10 - prints x10 times the alphabet
 *
 * Return: 0.
 */
void print_alphabet_x10(void)
{
	int i;
	char v;

	for (i = 0 ; i < 10 ; i++)
	{
		for (v = 'a' ; v <= 'z' ; v++)
			_putchar(v);
		_putchar('\n');
	}
}

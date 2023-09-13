#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @v: parameter to be checked
 * Return: l
 */
int print_last_digit(int v)
{
	int l;

	l = v % 10;
	if (v < 0)
		l = -l;
	_putchar(l + '0');
	return (l);
}

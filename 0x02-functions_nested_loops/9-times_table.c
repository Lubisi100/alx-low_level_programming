#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the n9 times table
 * Return: void
 */
void times_table(void)
{
	int i, v, l;

	for (i = 0 ; i < 10 ; i++)
	{
		for (v = 0 ; v < 10 ; v++)
		{
			l = i * v;
			if (v == 0)
				printf("%d, ", l);
			else
			{
				printf("%2d", l);
				if (v != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}

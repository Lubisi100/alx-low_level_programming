#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - a random number to the variable each time
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int v;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	v = n % 10;
	if (v > 5)
		printf("Last digit of %d is %d and is greater than 5", n, v);
	else if (v == 0)
		printf("Last digit of %d is %d and is 0", n, v);
	else if (v < 6 && v != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, v);
	printf("\n");
	return (0);
}

#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copy a string
 * @dest: destination string
 * @src: source string
 * @n: number of nytes to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include "main.h"
#include <string.h>

/**
 * _strlen - function that returns the length of a string
 *
 * @s: string to be calculated
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s++)
		a++;

	return (a);
}

#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 *
 * @c: checker
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}

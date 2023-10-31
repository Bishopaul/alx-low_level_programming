#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: checker
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}

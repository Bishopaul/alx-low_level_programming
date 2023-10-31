#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int a, b;

	for (a = 1; a < 11; a++)
	{
		for (b = 97; b < 123; b++)
		{
			_putchar(b);
		}
	_putchar(10);
	}
}

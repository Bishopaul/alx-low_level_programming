#include "main.h"

/**
 * print_alphabet - function that prints the alphabet, in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}

#include "main.h"

/**
 * print_diagonal - prints diagonal line
 *
 * @n: times diagonal line is printed.
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
			_putchar(' ');
		_putchar(92);
		if (a < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

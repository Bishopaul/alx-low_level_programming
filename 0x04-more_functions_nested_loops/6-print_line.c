#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n: to be used
 *
 * Return: void
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
		_putchar(95);
	_putchar('\n');
}

#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @a: checker
 *
 * Return: value of the last digit
 */

int print_last_digit(int a)
{
	int n;

	if (a < 0)
		n = (a % 10) * -1;
	else
		n = a % 10;

	_putchar(n + 48);
	return (n);
}

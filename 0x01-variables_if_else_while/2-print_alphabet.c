#include <stdio.h>

/**
 * main - Program that prints alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
		putchar(n);
	putchar(10);

	return (0);
}

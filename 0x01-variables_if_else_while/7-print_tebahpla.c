#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 122; a >= 97; a--)
		putchar(a);

	putchar(10);
	return (0);
}

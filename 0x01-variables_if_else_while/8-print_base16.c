#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
		putchar(a);

	for (b = 97; b <= 102; b++)
		putchar(b);

	putchar(10);
	return (0);
}

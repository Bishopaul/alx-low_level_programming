#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0
 */

int main(void)
{
	int a;
	int b;

	for (a = 97; a <= 122; a++)
		putchar(a);

	for (b = 65; b <= 90; b++)
		putchar(b);

	putchar(10);

	return (0);
}

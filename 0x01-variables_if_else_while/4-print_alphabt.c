#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (a == 101 || a == 113)
			continue;

		else
			putchar(a);
	}
	putchar(10);
	return (0);
}

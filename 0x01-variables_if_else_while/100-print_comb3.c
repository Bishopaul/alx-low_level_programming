#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = 48; a < 57; a++)
	{
		for (b = 49; b < 58; b++)
		{
			if (a >= b)
				continue;

			else
			{
				putchar(a);
				putchar(b);

				if (a == 56 && b == 57)
					break;

				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}

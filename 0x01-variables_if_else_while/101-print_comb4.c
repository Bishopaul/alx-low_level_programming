#include <stdio.h>

/**
 * main - program that prints possible different combinations of three digits
 *
 * Return: 0
 */

int main(void)
{
	int a, b, c;

	for (a = 48; a < 56; a++)
	{
		for (b = 49; b < 57; b++)
		{
			for (c = 50; c < 58; c++)
			{
				if (a >= b && b >= c)
					break;

				else
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if (a == 55 && b == 56 && c == 57)
						continue;
					else
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}

#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: zero
 */
int main(void)
{
	int a, b, z;

	for (a = 48; a < 58; a++)
	{
		for (b = 49; b < 58; b++)
		{
			for (z = 50; z < 58; z++)
			{
				if (z > b && b > a)
				{
				putchar(a);
				putchar(b);
				putchar(z);
				if (a != 55 || b != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}

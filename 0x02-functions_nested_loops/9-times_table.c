#include "main.h"
/**
 * times_table - prints the multiplication table
 * of 9
 *
 */
void times_table(void)
{
	int r, c, p;

	for (r = 0; r <= 9; r++)
	{
		putchar('0');
		for (c = 1; c <= 9; c++)
		{
			putchar(',');
			putchar(' ');
			p = (r * c);
			if (p <= 9)
			{
				putchar(' ');
			}
			else
			{
				putchar((p / 10) + '0');
			}
			putchar((p % 10) + '0');
		}
		putchar('\n');
	}
}

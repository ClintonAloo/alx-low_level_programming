#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @c: character to be printed
 * @i: integer to be printed
 * @f: float to be printed
 * @s: string to be printed
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);

	char c;
	int i = 0;
	while (format[i])
	{
		c = format[i];
		if (c == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (c == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (c == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (c == 's')
		{
			char *s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

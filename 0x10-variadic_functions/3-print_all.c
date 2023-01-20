i#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything according to the format string passed
 * @format: format string that specifies the types of
 *			arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 *		any other char should be ignored
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

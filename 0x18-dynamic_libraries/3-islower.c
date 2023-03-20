#include "main.h"

/**
 * _islower - prints 1 if c is lowercase
 *
 * @c: user input
 *
 * Return: Integer
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

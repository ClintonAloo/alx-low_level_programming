#include "main.h"
/**
 * main - Print _putchar
 *
 *Return: 0 0n success
 *
 *
 */
int main(void)
{
	char h[] = "_putchar";
	int i;

	for (i=0; h[i] ! = '\0'; i++)
	{
		_putchar(h[i]);
	}
	_putchar('\n');
	return (0);
}


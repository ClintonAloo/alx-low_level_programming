#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: the array in question
 * @n: no of elements in array
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n-- ; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}

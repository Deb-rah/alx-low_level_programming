#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements of the array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	j = 0;

	for (n--; n >= 0; n--, j++)
	{
		printf("%d", a[j]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}

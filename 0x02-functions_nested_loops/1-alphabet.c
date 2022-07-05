#include "main.h"

/**
 * main - Entry point
 * This program prints the alphabet, in lowercase, followed by a new line.
 * Return: Always 0
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		putchar(j);
	}
	_putchar('\n');
}

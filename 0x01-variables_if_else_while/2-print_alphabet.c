#include <stdio.h>

/**
 * main - Entry point
 * This program prints every letter of the program in lowercase
 * followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

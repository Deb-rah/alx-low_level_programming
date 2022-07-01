#include <stdio.h>

/**
 * main - Entry point
 * This program prints all single digit numbers of base 10
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * This program prints lowercase alphabets in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}

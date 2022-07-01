#include <stdio.h>

/**
 * main - Entry point
 * This program prints the numbers of base 16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}

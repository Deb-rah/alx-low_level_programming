#include "main.h"

/**
 * rot13 -> encodes astring using rot13
 * @s: the string
 * Return: The string
 */
char *rot13(char *s)
{
	int i, j;
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolean;

	for (i = 0; s[i] != '\0'; i++)
	{
		boolean = 0;
		for (j = 0; alpha[j] != '\0' && boolean == 0; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = r[j];
				boolean = 1;
			}
		}
	}
	return (s);
}

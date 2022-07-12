#include "main.h"
#include <string.h>

/**
 * _strlen ->  a function that returns the length of a string
 * @s: string pointer to pased to this function
 * Return: void
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	
	return (i);
}

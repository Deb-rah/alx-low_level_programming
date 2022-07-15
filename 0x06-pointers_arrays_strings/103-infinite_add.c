#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first parameter
 * @n2: second parameter
 * @r: result buffer
 * @size_r: result buffer size
 * Return: 0 if the result can not be stored
 * otherwise a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n;

	for (i =0; n1[i]; i++)
		;
	for (j = 0; n2[j]; j++)

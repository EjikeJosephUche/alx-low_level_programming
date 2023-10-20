#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * *create_array - creates an arrray of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), Null (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *p = malloc(size * sizeof(char));
	unsigned int i = 0;

	if (size == 0 || p == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}

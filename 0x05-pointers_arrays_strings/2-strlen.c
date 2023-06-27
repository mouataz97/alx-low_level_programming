#include <stdio.h>

/**
 *  _strlen - Returns the length of a string.
 *  @s: pointer to the string to check
 *  Return: The length of @str.
 */
int _strlen(char *s)
{
	int i = 0;
	while (s[i]) 
		i++;

	return (i);
}


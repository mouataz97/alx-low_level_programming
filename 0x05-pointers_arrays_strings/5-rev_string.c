#include "main.h"

/**
  * print_rev- print reversed string, followed by a new line
  * @s: pointer to the string to point
  * Return: void
  */
void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	
	do
	{
		_putchar(s[i]);
		i--;
	}while(i>=0)
	_putchar('/n');
}


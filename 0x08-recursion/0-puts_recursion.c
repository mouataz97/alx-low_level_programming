#include "main.h"

/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	_puts(*s);
	_puts_recursion(*s + 1);
	_putchar('\n');
	return (0);
}


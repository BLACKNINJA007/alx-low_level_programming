#include"main.h"

/**
 * _puts - prints a string, followed by a newline to stdout
 * @str: string parameter to print
 * Return: Nothing
 */

void _puts(char *str)
{
	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}


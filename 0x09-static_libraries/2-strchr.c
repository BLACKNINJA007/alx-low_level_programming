#include "main.h"
#define NULL 0

/**
 * _strchr - locates a character in a string
 * @c: occurrence of the character
 * @s: in the string
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c) /* find match */
		i++;

	if (s[i] == c) /* if match, assign to address */
		return (&s[i]);
	else
		return (NULL);
}


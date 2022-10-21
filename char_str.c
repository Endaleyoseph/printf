#include "main.h"
#include <stdlib.h>

/**
 * char_str - converts character to string
 * @ap: character to be converted
 * Return: string
 */

char *char_str(va_list ap)
{
	char c;
	char *s;

	c = va_arg(ap, int);

	s = malloc(sizeof(char) * 2);
	if (s == NULL)
		return (NULL);
	s[0] = c;
	return (s);
}

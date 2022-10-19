#include "main.h"
#include <stdlib.h>

/**
 * str_rot13 - returns the rot13'ed string
 * @ap: string tobe rot13'ed
 * Return: rot13'ed string
 */

char *str_rot13(va_list ap)
{
	char *dest;
	char *s;
	int len;

	s = va_arg(ap, char *);
	if (s == NULL)
		s = "(null)";

	len = _strlen(s);

	dest = malloc(sizeof(char) * len + 1);

	if (dest == NULL)
		return (NULL);

	return (_strrot13(dest, s));
}

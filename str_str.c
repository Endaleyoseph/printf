#include "main.h"
#include <stdlib.h>

/**
 * str_str - copies an input sting and returns a string
 * @ap: string tobe copied
 * Return: copied string
 */

char *str_str(va_list ap)
{
	char *dest;
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
		s = "(null)";
	
	dest = malloc(sizeof(s) * (_strlen(s) + 1));

	if (dest == NULL)
		return (NULL);
	return (_strcpy(dest, s));
}

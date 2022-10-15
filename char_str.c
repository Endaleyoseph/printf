#include "main.h"
#include <stdlib.h>

/**
 * char_str - converts character to string
 * @c: character to be converted
 * Return: string
 */

char *char_str(char c)
{
	char *s;
	
	s = malloc(sizeof(char) * 2);
	if (s == NULL)
		return (NULL);
	s[0] = c;
	s[1] = 1;
}

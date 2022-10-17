#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * get_function - gets function for matching character
 * @c: character to be checked
 * Return: pointer to function
 */

char* (*get_function(char c))(va_list)
{
	data_t chose[] = {
		{'c', char_str},
		{'s', str_str},
		{'i', num_str},
		{'d', num_str},
		{'b', binary},
		{'\0', NULL}
	};
	int i = 0;

	while (chose[i].c != '\0')
	{
		if (chose[i].c == c)
			return (chose[i].fun);
		i++;
	}

	return (NULL);
}

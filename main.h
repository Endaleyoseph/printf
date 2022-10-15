#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

char *char_str(char c);
int _strlen(char *s);
char *_strcpy(char *s);
char *(*get_function(char c))(va_list);

/**
 * struct data - contains two elements
 * @c: character
 * @fun: pointer to function
 *
 * Description: contains a character and pointer to function
 * for passing it as an argument.
 */

typedef struct data
{
	char c;
	char* (*fun(va_list));
} data_t;

#endif

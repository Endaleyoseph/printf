#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

char *char_str(va_list ap);
int _strlen(char *s);
char *_strcpy(char *dest, char *s);
char *rev_str(char *str, int num);
char *str_str(va_list ap);
char *print_num(int n, int mul, int len);
char *num_str(va_list ap);
char *binary(va_list ap);
char *dec_octal(va_list ap);
char *int_hex(va_list ap);
char *int_heX(va_list ap);
char *oct_str(int num, int x, int mul, int len);
char *create_buf(void);
char* (*get_function(char c))(va_list ap);
void print_buffer(char *buffer, int len, va_list ap);
int _printf(const char *format, ...);

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
	char* (*fun)(va_list);
} data_t;

#endif

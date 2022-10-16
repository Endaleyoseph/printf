#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * check_buffer_len - checks buffer length
 * @len: length of the buffer
 * @buffer: buffer storing string
 * Return: the length of the buffer
 */

int check_buffer_len(char *buffer, int len)
{
	if (len > 1020)
	{
		write(1, buffer, len);
		len = 0;
	}

	return (len);
}

/**
 * create_buf - creates a buffer
 *
 * Return: buffer
 */

char *create_buf(void)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (NULL);
	return (buffer);
}

/**
 * _printf - writes the result to the buffer
 * @format: format for printing
 * Return: the length of the buffer
 */

int _printf(const char *format, ...)
{
	int len = 0, total_len = 0, i = 0, j = 0;
	va_list ap;
	char* (*f)(va_list);
	char *buffer;
	char *s;

	if (format == NULL)
		exit(98);

	buffer = create_buf();

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			len = check_buffer_len(buffer, len);
			buffer[len++] = format[i++];
			total_len++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
			{
				va_end(ap);
				free(buffer);
				exit(98);
			}
			if (format[i] == '%')
			{
				len = check_buffer_len(buffer, len);
				buffer[len++] = format[i];
				total_len++;
			}
			else
			{
				f = get_function(format[i]);
				if (f == NULL)
				{
					len = check_buffer_len(buffer, len);
					buffer[len++] = '%';
					total_len++;
					buffer[len++] = format[i];
					total_len++;
				}
				else
				{
					s = f(ap);
					if (s == NULL)
					{
						va_end(ap);
						free(buffer);
						exit(98);
					}
					if (format[i] == 'c' && s[0] == '\0')
					{
						len = check_buffer_len(buffer, len);
						buffer[len++] = '\0';
						total_len++;
					}
					j = 0;
					while (s[j] != '\0')
					{
						len = check_buffer_len(buffer, len);
						buffer[len++] = s[j];
						total_len++;
						j++;
					}
					free(s);
				}
			}
			i++;
		}
	}
	print_buffer(buffer, len, ap);
	return (total_len);
}

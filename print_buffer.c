#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * print_buffer - wirtes into the buffer
 * @buffer: string to be written
 * @len: length of the string
 * @ap: list variable
 */

void print_buffer(char *buffer, int len, va_list ap)
{
	char *buf;

	buf = realloc(buffer, len);
	write(1, buf, len);

	free(buf);
	va_end(ap);
}

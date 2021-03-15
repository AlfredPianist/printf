#ifndef _PRINTF_H_
#define _PRINTF_H_

#define BUFFER 1024

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct format_s - A format specifier with its respective function.
 * @format: The format specifier.
 * @format_f: The function pointer to the format.
 */
typedef struct format_s
{
	char *format;
	void (*format_f)(va_list, unsigned int *, unsigned int *, char *);
} format_t;

int _printf(const char *format, ...);

void (*get_format(char s))(va_list, unsigned int *, unsigned int *, char *);

/* Format specifiers */
void f_char(va_list arg_l,
	    unsigned int *format_i, unsigned int *buffer_i,
	    char *buffer);
void f_str(va_list arg_l,
	   unsigned int *format_i, unsigned int *buffer_i,
	   char *buffer);
void f_perc(va_list arg_l,
	    unsigned int *format_i, unsigned int *buffer_i,
	    char *buffer);
void f_int(va_list arg_l,
	   unsigned int *format_i, unsigned int *buffer_i,
	   char *buffer);

/* Utilities */
char *_itoa(long int number, short base);
void str_concat(char *orig, char *buffer, unsigned int *buffer_i);

/* Memory management */
void *_alloc(void *buffer);
void *check_buffer(void *buffer, unsigned int *buffer_i);
void *_realloc(void *buffer, unsigned int old_size, unsigned int new_size);

#endif

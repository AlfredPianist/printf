#ifndef _PRINTF_H_
#define _PRINTF_H_
#include <unistd.h>
#include <stdarg.h>
typedef struct format_s
{
	char *format;
	void (*format_f)(va_list, unsigned int *, unsigned int *, char *);
} format_t;

int _printf(const char *format, ...);
void f_char(va_list format, unsigned int *counter_f, unsigned int *counter_s, char *str);
void f_str(va_list format, unsigned int *counter_f, unsigned int *counter_s, char *str);
void f_perc(va_list format, unsigned int *counter_f, unsigned int *counter_s, char *str);
void (*get_format (char s))(va_list, unsigned int *, unsigned int *, char *);
#endif

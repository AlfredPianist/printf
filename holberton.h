#ifndef _PRINTF_H_
#define _PRINTF_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/* When finished, delete following library */
#include <stdio.h>

/* Structures */
/**
 * struct format_s - A format specifier with its respective function.
 * @format: The format specifier.
 * @format_f: The function pointer to the format.
 */
typedef struct format_s
{
	char *format;
	char *(*format_f)(va_list, unsigned int);
} format_t;

/* MAIN PROGRAM */
int _printf(const char *format, ...);
void form(const char **format,
	  va_list arg_l, int *buffer_i, unsigned int *buff_len, char *buffer);
char *(*get_f(const char **f))(va_list, unsigned int);

/* FORMAT SPECIFIERS */
/* Mandatory */
char *f_char(va_list arg_l, unsigned int precision);
char *f_str(va_list arg_l, unsigned int precision);
char *f_perc(va_list arg_l, unsigned int precision);
char *f_int(va_list arg_l, unsigned int precision);

/* Advanced */
/* Formats */
char *f_bin(va_list arg_l, unsigned int precision);
char *f_uint(va_list arg_l, unsigned int precision);
char *f_oct(va_list arg_l, unsigned int precision);
char *f_hexu(va_list arg_l, unsigned int precision);
char *f_hexl(va_list arg_l, unsigned int precision);
char *f_add(va_list arg_l, unsigned int precision);
char *f_strh(va_list arg_l, unsigned int precision);
char *f_rev(va_list arg_l, unsigned int precision);
char *f_rot(va_list arg_l, unsigned int precision);

/* Modifiers */
char *m_ld(va_list arg_l, unsigned int precision);
char *m_lu(va_list arg_l, unsigned int precision);
char *m_lo(va_list arg_l, unsigned int precision);
char *m_lx(va_list arg_l, unsigned int precision);
char *m_lX(va_list arg_l, unsigned int precision);

/* Precision */
char *prec_int(char *integer, unsigned int precision);
char *prec_uint(char *u_integer, unsigned int precision);

/* EXTRA */
/* Utilities */
char *_itoa(long int number);
char *_uitoa_b_o_h(unsigned long int number, short base, short upper);
void rev_string(char *str);
void rot13(char *str);

/* String manipulation */
void str_concat(char *orig, char *buffer, int *buffer_i,
		unsigned int *buff_len);
unsigned int str_len(char *str);
char *str_cpy(char *orig, char *dest);
char *str_cpy_h(char *orig, char *dest);
int str_cmp(const char *str1, char *str2);

/* Memory management */
void *_alloc(void *buffer, unsigned int size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void check_buffer(char *buffer, int *buffer_i, unsigned int *buff_len, char c);

#endif

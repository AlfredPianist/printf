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
	void (*format_f)(va_list, int *, unsigned int *, char *);
} format_t;

/* MAIN PROGRAM */
int _printf(const char *format, ...);
void (*get_f(const char *f, short *i))(va_list, int *, unsigned int *, char *);

/* FORMAT SPECIFIERS */
/* Mandatory */
void f_char(va_list arg_l,
	    int *buffer_i, unsigned int *buff_len,
	    char *buffer);
void f_str(va_list arg_l,
	   int *buffer_i, unsigned int *buff_len,
	   char *buffer);
void f_perc(va_list arg_l,
	    int *buffer_i, unsigned int *buff_len,
	    char *buffer);
void f_int(va_list arg_l,
	   int *buffer_i, unsigned int *buff_len,
	   char *buffer);

/* Advanced */
/* Formats */
void f_bin(va_list arg_l, int *buffer_i, unsigned int *buff_len, char *buffer);
void f_uint(va_list arg_l, int *buffer_i, unsigned int *buff_len,
	    char *buffer);
void f_oct(va_list arg_l, int *buffer_i, unsigned int *buff_len, char *buffer);
void f_hexu(va_list arg_l, int *buffer_i, unsigned int *buff_len,
	    char *buffer);
void f_hexl(va_list arg_l, int *buffer_i, unsigned int *buff_len,
	    char *buffer);
void f_add(va_list arg_l, int *buffer_i, unsigned int *buff_len, char *buffer);
void f_strh(va_list arg_l, int *buffer_i, unsigned int *buff_len,
	    char *buffer);
void f_rev(va_list arg_l, int *buffer_i, unsigned int *buff_len, char *buffer);
void f_rot(va_list arg_l, int *buffer_i, unsigned int *buff_len, char *buffer);

/* Modifiers */
void m_ld(va_list arg_l, int *buffer_i, unsigned int *buff_len, char *buffer);
void m_lu(va_list arg_l, int *buffer_i, unsigned int *buff_len, char *buffer);
void m_lo(va_list arg_l, int *buffer_i, unsigned int *buff_len, char *buffer);
void m_lx(va_list arg_l, int *buffer_i, unsigned int *buff_len, char *buffer);
void m_lX(va_list arg_l, int *buffer_i, unsigned int *buff_len, char *buffer);

/* EXTRA */
/* Utilities */
char *_itoa(long int number);
char *_uitoa_b_o_h(unsigned long int number, short base, short upper);
void rev_string(char *str);
void rot13(char *str);

/* String manipulation */
void str_concat(char *orig, char *buffer, int *buffer_i,
		unsigned int *buff_len);
char *str_cpy(char *orig, char *dest);
char *str_cpy_h(char *orig, char *dest);
int str_cmp(const char *str1, char *str2);

/* Memory management */
void *_alloc(void *buffer, unsigned int size);
void check_buffer(char *buffer, int *buffer_i, unsigned int *buff_len, char c);

#endif

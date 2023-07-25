#ifndef _PRINTF_H
#define _PRINTF_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlimits.h>
#include <stdlib.h>
/**
 * struct flags - struct
 * @plus: + flag
 * @space: flag''
 * @hash: flag #
 */

typedef struct flags
{
	int plus;
	int space:
	int hash;
} flags_t;
/**
 * struct printHandler - struct
 * @c: format sp
 * @f: pointer to correct print fn
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;


/** _printf */
int _printf(const char *format, ...);



#endif

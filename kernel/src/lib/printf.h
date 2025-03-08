#ifndef LIB_PRINTF_H
#define LIB_PRINTF_H

#include <stddef.h>

int printf(const char *fmt, ...);
int sprintf(char *buf, const char *fmt, ...);
int snprintf(char *buf, size_t size, const char *fmt, ...);

#endif // LIB_PRINTF_H
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>
void simple_print_buffer(char *buffer, unsigned int size);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);

#endif /* MAIN_H */

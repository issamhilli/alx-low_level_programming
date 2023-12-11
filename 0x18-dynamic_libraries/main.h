#ifndef MAIN H
#define MAIN H

#include <stdio.h>
#include <stdlib.h>

int putchar (char c);
int _islower (int c);
int _isalpha (int c);
int abs (int n);
int _isupper (int c);
int isdigit (int c);
int _strlen(char *s);
void puts (char *5);
char *_strcpy (char *dest, char *src);
int atoi (char *s);
char *_strcat (char *dest, char *src);
char *_strncat (char *dest, char *src, int n);
char * strncpy (char *dest, char *src, int n);
int _strcmp (char *s1, char *52);
char_memset (char *s, char b, unsigned int n);
char * _memcpy (char *dest, char *src, unsigned int n);
char *_strchr (char *s, char c);
unsigned int_strspn (char*s, char *accept);
char * strpbrk (char *s, char *accept);
char *_strstr(char *haystack, char *needle);

#endif /* MAIN_H */

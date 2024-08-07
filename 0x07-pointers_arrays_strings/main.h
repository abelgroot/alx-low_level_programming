#ifndef MAIN_H
#define MAIN_H
#define NULL ((void *)0)
void simple_print_buffer(char *buffer, unsigned int size);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char  *s, char *accept);
void print_chessboard(char (*a)[8]);
void _putchar(char a);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif /* MAIN_H */


#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#ifndef NULL
#define NULL ((void*)0)
#endif 

void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */


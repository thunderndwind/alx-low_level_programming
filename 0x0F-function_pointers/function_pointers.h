#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdarg.h>
#include <stdio.h>

typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);



#endif

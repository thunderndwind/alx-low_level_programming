#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int len(char *str);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
int num_words(char *str);

#endif /* MAIN_H */

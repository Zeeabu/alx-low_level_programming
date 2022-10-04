#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

/**
*void prototype()
 *int prototype()
 *char prototypes()
 */

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);


#endif /* MAIN_H */





#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>

/* initialize size of buffer for user input */

#define READ_BUFF 1000

/* shell utility functions */
void ctrl_C(int);
char *_getline(void);

/* shell helper function */
int print(char *, int);


/* shell string functions */
int _strlen(char *);


/* shell memory management */
void *_realloc(void *, int, int);


#endif /* SHELL_H */

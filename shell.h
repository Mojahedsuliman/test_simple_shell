#ifndef SHELL_H
#define SHELL_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

void printer(char *text);
void com_prompt(void);
void user_input(char *text, size_t size);
void file_exec(const char *text);
int main(void);

#endif

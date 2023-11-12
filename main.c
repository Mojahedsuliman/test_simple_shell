#include "shell.h"

/**
 * main - entry point of the program
 * 
 * Return: 0
 * */
int main(void)
{
    char text[1024];
    size_t size = 1024;
    char *token;
    char *args[100];
    int i = 0;

    user_input(text, size);
    token = strtok(text, " ");
    while (token != NULL)
    {
        args[i++] = token;
        token = strtok(NULL, " ");
    }
    args[i] = NULL;
    file_exec(args);
    return (0);
}

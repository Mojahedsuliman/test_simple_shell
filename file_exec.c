#include "shell.h"


/**
 * file_exec - a function that executes a file
 * @text: string to be printed
 *
 * Return: void
*/
void file_exec(const char *text)
{
    pid_t child_pid = fork();

    if (child_pid == -1)
    {
        printer("Error: fork failed\n");
        exit(EXIT_FAILURE);
    }
    else if (child_pid == 0)
    {
        char *args[100];
        char *token = strtok((char *)text, " ");
        int i = 0;
        while (token !=NULL)
        {
            args[i++] = token;
            token = strtok(NULL, " ");
        }
        args[i] = NULL;
        execvp(args[0], args);
        printer("Error: command not found\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        wait(NULL);
    }
}

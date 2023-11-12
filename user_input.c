#include "shell.h"

/**
 * user_input - a function that reads user inputs
 * @text: string to be printed
 * @size: size of the srting
 * 
 * Return: void
 * */
void user_input(char *text, size_t size)
{
    if (fgets(text, size, stdin) == NULL)
    {
        if (feof(stdin))
        {
            printer("\n");
            exit(EXIT_SUCCESS);
        }
        else
        {
            printer("Error: read failed\n");
            exit(EXIT_FAILURE);
        }
    }
    if (text[_strlen(text) - 1] == '\n')
    {
        text[_strlen(text) - 1] = '\0';
    }
}

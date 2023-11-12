#include "shell.h"

/**
 * printer - a function that prints a string
 * @text: string to be printed
 * 
 * Return: void
*/
void printer(char *text)
{
    write(STDOUT_FILENO, text, _strlen(text));
}

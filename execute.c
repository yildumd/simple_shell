#include "main.h"


/**
 * execute - Execute a command with its arguments.
 * @argv: An array of strings containing
 * the command and its arguments.
 *
 * Return: The exit status of the executed command.
 */
int execute(char **argv)
{
    int status;
    pid_t pid;

    pid = fork();

    if (pid == 0)
    {
        if (execve(argv[0], argv, environ) == -1)
            perror("Error");
  
    }
    else
    {
            wait(&status);
            if(WIFEXITED(status))
                status = WEXITSTATUS(status);
    }

    return (status);
}

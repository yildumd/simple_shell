#include "main.h"


/**
 * _strlen - Calculate the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
    int c;

Here:
    if(str[c] != '\0')
    {
        c++;
        goto Here;
    }
    else
    {
        goto End;
    }

End:
    return (c);
}

#include "main.h"

/**
 * _strcmp - Compare two strings.
 * @a: The first string.
 * @b: The second string.
 *
 * Return: The difference between ASCII values
 * of the first differing characters,
 *         or 0 if the strings are equal.
 */

int _strcmp(char *a, char *b)
{
    int i;

    for(i = 0; i < (*a && *b); i++)
    {
        if (*a != *b)
            return(*a - *b);
    }

    return (0);
}

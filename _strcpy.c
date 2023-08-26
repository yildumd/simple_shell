#include "main.h"

/**
 * _strcpy - Copy a string from source to destination.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: A pointer to the destination buffer.
 */

char* _strcpy(char* dest, const char* src)
{
    char* str;

    str = dest;

Here:
    if (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;

        goto Here;
    }

    *dest = '\0';

    return (str);
}

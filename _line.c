#include "main.h"


/**
 * _line - Check if buffer contains only spaces.
 * @buffer: The input buffer to check.
 *
 * Return: 1 if the buffer contains
 * only spaces, 0 otherwise.
 */
int _line(char *buffer) {
  
  int i = 0;

  while (buffer[i] != '\0')
  {
    if (buffer[i] != ' ')
	{
      return (0);
    }
	i++;
  }
  return (1);
}

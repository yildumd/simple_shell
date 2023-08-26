#include "main.h"

/**
 * _getenv - Retrieve the value of an environment variable.
 * @env_var: The name of the environment variable.
 *
 * Return: A pointer to the value of the environment variable.
 */

#include "main.h"

char *_getenv(char *env_var)
{
   int i = 0;

  while (environ[i])
  {
    if (strncmp(environ[i], env_var, strlen(env_var)) == 0)
    {
      return &environ[i][strlen(env_var) + 1];
    }

    i++;
  }

  return (NULL);
}

/**
 * _env - Print all the environment variables.
 */
void _env(void)
{
    int i = 0;

Here:
    if (environ[i])
    {
        printf("%s\n", environ[i]);
        i++;
        goto Here;
    }
}

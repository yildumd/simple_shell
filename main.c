#include "main.h"

int main(void)
{
	char *buff = NULL, **argv;
	size_t read_size = 0;
	ssize_t buff_size;
	int exit_status = 0;

	while (1)
	{
		if (isatty(0))
			printf("hsh$ ");

		buff_size = getline(&buff, &read_size, stdin);
		if (buff_size == -1 || strcmp("exit\n", buff) == 0)
		{
			free(buff);
			break;
		}
		buff[buff_size - 1] = '\0';

		if (strcmp("env", buff) == 0)
		{
			_env();
			continue;
		}

		if (_line(buff) == 1)
		{
			exit_status = 0;
			continue;
		}

		argv = token(buff, " ");
		argv[0] = _path(argv[0]);

		if (argv[0] != NULL)
			exit_status = execute(argv);
		else
			perror("Error");
		free(argv);
	}
	return (exit_status);
}

#include "holberton.h"

/**
 * main - runs our shell
 * @ac: argument counter
 * @av: argument vector
 * @envp: environment pointer
 * Return: 0
 */

int main(int ac, char **av, char **envp)
{
	char *input_line, *final_path, *path;
	char **args, **all_paths;
	int status, i;
	(void)ac;
	(void)av;

	while (1)
	{
		write(1, "$ ", 2);
		input_line = read_input();
		if (strcmp(input_line, "exit\n") == 0)
		{
			free(input_line);
			exit(EXIT_SUCCESS);
		}
		printf("1: %s", input_line);
		args = split_input(input_line);
		printf("2: %s\n", *args);
		path = get_path(envp);
		printf("3: %s\n", path);
		all_paths = split_path(*args, path);
		printf("4: %s\n", *all_paths);
		final_path = found_path(all_paths);
		printf("5: %s\n", final_path);
		status = _execute(final_path, args);
		printf("6: %d\n", status);
		free(input_line);
		free(args);
		free(path);
		for (i = 0; all_paths[i]; i++)
		{
			free(all_paths[i]);
		}
		free(all_paths);
	}
	while (status)
		;
	return (0);
}

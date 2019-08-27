#include "holberton.h"

/**
 * _execute - execute command if found
 * @cmdpath: correct path with command
 * @cmdargs: arguments passed from parsing
 * @envp: environment pointer
 * Return: 0 or 1 on error
 */

int _execute(char *cmdpath, char **cmdargs, char **envp)
{
	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error: hsh");
		return (1);
	}
	if (child_pid == 0)
	{
		if (execve(cmdpath, cmdargs, envp) == -1)
		{
			perror("Command not found");
			exit(-1);
		}
	}
	else
		wait(&status);
	return (child_pid);
}

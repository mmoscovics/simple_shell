#include "holberton.h"

/**
 * get_path - reads through environment, stores path in varaible
 * @envp: environment
 * Return: path string variable
 */

char *get_path(char **envp)
{
	char start_path[] = "PATH=";
	char *path;
	int iter = 0, iter2 = 0;
	int path_check = 0, bufsize = 1024;

	path = malloc(bufsize * sizeof(char));
	while (envp[iter])
	{
		while (envp[iter][iter2])
		{
			if (start_path[iter2] == '='
			    && envp[iter][iter2] == '=')
			{
				iter2++;
				path_check = 1;
				break;
			}
			if (start_path[iter2] != envp[iter][iter2])
			{
				break;
			}
			iter2++;
		}
		if (path_check == 1)
			break;
		iter++;
	}
	if (envp[iter])
		path = _strcpy(path, envp[iter] + iter2);
	return (path);
}

/**
 * check_path - checks tokenized path for command
 * @cmdpath: path token
 * Return: 1 if pass 0 if fail
 */

int check_path(char *cmdpath)
{
	if (access(cmdpath, F_OK) == 0)
		return (1);
	else
		return (0);
}

/**
 * found_path - gets path that has access to function
 * @cmdpath: all path tokens
 * Return: working path, or NULL if fail
 */

char *found_path(char **cmdpath)
{
	int iter = 0, checker;

	while (cmdpath[iter])
	{
		checker = check_path(cmdpath[iter]);
		if (checker == 1)
			return (cmdpath[iter]);
		iter++;
	}
	return (NULL);
}

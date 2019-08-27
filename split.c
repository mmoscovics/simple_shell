#include "holberton.h"

/**
 * split_input - parses the input line - seperates command and args
 * @input_line: read line from stream
 * Return: array of strings
 */

char **split_input(char *input_line)
{
	size_t bufsize = 1024;
	int iter = 0;
	char *token, **command_tokens, *delims = " \n";

	command_tokens = malloc(bufsize * sizeof(char *));
	token = strtok(input_line, delims);
	while (token != NULL)
	{
		command_tokens[iter] = token;
		iter++;
		token = strtok(NULL, delims);
	}
	command_tokens[iter] = NULL;
	return (command_tokens);
}

/**
 * split_path - parses the path - seperates by :
 * @command_tokens: array of command strings
 * @path: path
 * Return: array of path strings
 */

char **split_path(char *command_tokens, char *path)
{
	size_t bufsize = 100;
	int iter = 0;
	char *token, **path_tokens, *delims = ":";

	path_tokens = malloc(bufsize * sizeof(char *));
	token = strtok(path, delims);
	while (token != NULL)
	{
		token = cat_tokens(token, command_tokens);
		path_tokens[iter] = token;
		iter++;
		token = strtok(NULL, delims);
	}
	path_tokens[iter] = NULL;
	return (path_tokens);
}

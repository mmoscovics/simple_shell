#include "holberton.h"

/**
 * cat_tokens - concatinates path token with command token
 * @path_tokens: path token
 * @command_tokens: command token
 * Return: concatinated tokens
 */

char *cat_tokens(char *path_tokens, char *command_tokens)
{
	char *slash = "/";
	char *cmdpath;
	int bufsize = 1024;

	cmdpath = malloc(bufsize * sizeof(char));
	strcpy(cmdpath, path_tokens);
	strcat(cmdpath, slash);
	strcat(cmdpath, command_tokens);
	return (cmdpath);
}

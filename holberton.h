#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <dirent.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <string.h>

char *read_input(void);
char **split_input(char *input_line);
int _execute(char *cmdpath, char **cmdargs);

char *get_path(char **envp);
char **split_path(char *command_tokens, char *path);

char *cat_tokens(char *path_tokens, char *command_tokens);

int check_path(char *cmdpath);
char *found_path(char **cmdpath);
char *final_path(char *cmdpath);

#endif /* HOLBERTON_H */

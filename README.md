# Building the simple shell by Moscovics and Quinones

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/235/shell.jpeg)

# Building a simple shell that includes the basic functionality of a traditional Unix command line user 
 
 That includes functions access, execve, exit, fork, free, fstat, getline, malloc, perror, signal, stat, wait, write. 
 
 - All the files will be compiled on Ubuntu 14.04 LTS
 - Using gcc -Wall -Werror -Wextra -pedantic *.c -o hsh to compile
 - All your files should end with a new line
 - Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
 

![](https://en.opensuse.org/images/e/e2/Flow1.jpg)

# The shell has 4 very important rolls 

* It should be able to read information.
* It should be able to interpret the information given.
* It should be able to execute the command. 
* It should be able to free up used memory and shut down. 

## Output of error with sh 
```
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```

## Output of error with hsh
```
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```
## Compilation
Shell will be compiled this way:
```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
## Testing 
shell should work like this in interactive mode:
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
but also in non-interactive mode:
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```
## Fetures
* uses the PATH
* implements builtins
* handels command line arg
* handels comments
* handels ;
* a getline funtion
* handels && || functions
* aliases

## Builtins
* exit
* env
* setenv
* unsetenv
* cd 
* help
* history 

## example of shell use 
```
drwxr-xr-x  4 vagrant vagrant 4096 Aug 27 00:22 .
drwxr-xr-x 16 vagrant vagrant 4096 Aug 28 02:22 ..
-rwxrwxr-x  1 vagrant vagrant 8493 Aug 23 15:10 a.out
-rw-rw-r--  1 vagrant vagrant 1767 Aug 23 18:04 getlin.c
drwxrwxr-x  8 vagrant vagrant 4096 Aug 28 16:58 .git
-rw-rw-r--  1 vagrant vagrant    1 Aug 27 00:20 images
-rw-rw-r--  1 vagrant vagrant 1182 Aug 27 00:20 README.md
-rw-rw-r--  1 vagrant vagrant  104 Aug 24 17:54 #readmetest.md#
drwxr-xr-x  3 vagrant vagrant 4096 Aug 27 00:20 shelltest
-rw-rw-r--  1 vagrant vagrant  168 Aug 26 21:05 simple_
-rw-rw-r--  1 vagrant vagrant  267 Aug 20 23:08 strcmp.c
-rw-rw-r--  1 vagrant vagrant  820 Aug 23 17:30 strncmp2.c
-rw-rw-r--  1 vagrant vagrant  820 Aug 23 16:54 strncmp2.c~
-rw-rw-r--  1 vagrant vagrant  386 Aug 23 15:09 strncmp.c
-rw-rw-r--  1 vagrant vagrant  510 Aug 22 22:33 strncmp.c~
-rw-rw-r--  1 vagrant vagrant  226 Aug 22 15:08 struc.c
-rw-rw-r--  1 vagrant vagrant  262 Aug 22 15:05 struc.c~
-rw-rw-r--  1 vagrant vagrant  418 Aug 21 14:54 test1.c
-rw-rw-r--  1 vagrant vagrant  220 Aug 21 14:44 test1.c~
-rw-rw-r--  1 vagrant vagrant  563 Aug 21 14:33 test.c
-rw-rw-r--  1 vagrant vagrant 1504 Aug 20 17:28 testing.c

```


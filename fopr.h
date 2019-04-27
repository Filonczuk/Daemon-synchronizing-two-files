/**
 * @file fopr.h
 * @brief module for performing various file operations
 * @version 1.3
 * @date 2019-04-18
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#ifndef FOPR_H
#define FOPR_H

#include <dirent.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <syslog.h>
#include <unistd.h>

/**
 * @brief Creates the full path to the file.
 * On input as the first parameter the function gets the path to the directory with the 
 * file as a character table and as the second parameter it gets the file name.
 * @return char* returns the full directory path
 */
char * create_full_path(char*, char*);
/**
 * @brief The function checks if the file with the given name is a regular file.
 * 
 * @return int returns a non-zero value if the file is a regular file.
 */
int is_regular_file(const char *);
/**
 * @brief The function checks if the file with the given name is a directory.
 * 
 * @return int returns a non-zero value if the file is a directory.

 */
int is_directory(const char *);

#endif

/**
 * @file comparator.h
 * @brief The module contains tools for comparing files.
 * @version 1.3
 * @date 2019-04-18
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#ifndef COMPARATOR_H
#define COMPARATOR_H

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
 * @brief The function compares the modification time of two files specified by their absolute path stored in character tables.
 * 
 * @param p1 source file
 * @param p2 destination file
 * @return int - returns 1 if the modification date of the source file is later than the modification date of the target file.
 * Returns 0 in other cases.
 */
int compare_mtime(char* p1, char* p2);
/**
 * @brief The function checks if the file size given in GB is greater than the value determined by the div_size variable
 * 
 * @param p1 character table containing the full path to the file
 * @param div_size fixed maximum file size given in GB
 * @return int returns 1 if the file size is greater than the specified value or 0 in other cases
 */
int compare_size(char * p1, int div_size);

#endif

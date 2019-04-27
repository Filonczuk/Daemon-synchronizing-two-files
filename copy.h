/**
 * @file copy.h
 * @brief The module contains tools for copying files
 * @version 1.3
 * @date 2019-04-18
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#ifndef COPY_H
#define COPY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
/**
 * @brief function copies the file using system calls: read / write. On input it gets the number of arguments and pointer on the table which contains information about
 * path to source file, path to destination file and buffer size to load and save data.
 * 
 * 
 * @return int returns 0 if the file was successfully copied and -1 if the error occurred
 */
int copy_normal(int, char **);
/**
 * @brief function copies the file using system calls: mmap / write. On input it gets the number of arguments and pointer on the table which contains information about
 * path to source file, path to destination file and buffer size to load and save data.
 * 
 * 
 * @return int returns 0 if the file was successfully copied and -1 if the error occurred
 */
int copy_with_mapping(int, char **);

#endif

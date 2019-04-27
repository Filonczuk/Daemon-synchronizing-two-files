/**
 * @file fopr.h
 * @brief moduł służy do przeprowadzania różnych operacji na plikach 
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
 * @brief Tworzy pełną ścieżkę do pliku.
 * Przyjmuje jako pierwszy parametr ścieżkę do katalogu z plikiem w postaci tablicy znaków oraz jako drugi parametr przyjmuje nazwę pliku.
 * 
 * @return char* zwraca pełną ścieżkę do pliku.
 */
char * create_full_path(char*, char*);
/**
 * @brief Funkcja sprawdza czy plik o nazwie podanej przez tablicę znaków jest zwykłym plikiem.
 * 
 * @return int zwraca wartość niezerową jeżeli plik jest zwykłym plikiem.
 */
int is_regular_file(const char *);
/**
 * @brief Funkcja sprawdza czy plik o nazwie podanej przez tablicę znaków jest katalogiem.
 * 
 * @return int zwraca wartość niezerową jeżeli plik jest katalogiem.
 */
int is_directory(const char *);

#endif

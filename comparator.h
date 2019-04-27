/**
 * @file comparator.h
 * @brief Moduł zawiera narzędzia do porównywania plików.
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
 * @brief Funkcja porównuje czas modyfikacji dwóch plików określonych przez ich ścieżkę bezwzględną przechowywaną w tablicach znaków.
 * 
 * @param p1 plik źródłowy
 * @param p2 plik docelowy
 * @return int zwraca 1 jeżeli data modyfikacji pliku źródłowego jest późniejsza niz data modyfikacji pliku docelowego.
 * Zwraca 0 w pozostałych przypadkach.
 */
int compare_mtime(char* p1, char* p2);
/**
 * @brief Funkcja sprawdza czy rozmiar pliku podany w GB jest większy od wartości ustalonej przez zmienną div_size
 * 
 * @param p1 tablica znaków zawierająca pełną ścieżkę do pliku
 * @param div_size ustalona maksymalna wielkość pliku podana w GB
 * @return int zwraca 1 jeżeli rozmiar pliku jest większy od ustalonej wartości lub 0 w pozostałych przypadkach
 */
int compare_size(char * p1, int div_size);

#endif

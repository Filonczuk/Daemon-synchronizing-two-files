/**
 * @file copy.h
 * @brief moduł zawiera narzędzia służące do kopiowania plików
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
 * @brief funkcja kopiująca plik przy pomocy wywołań systemowych: read/write. Przyjmuje liczbę argumentów oraz wskaźnik na tablicę w której przechowywane są informacje o
 * ścieżce do pliku źródłowego, docelowego oraz rozmiarze bufra do wczytywania i zapisywania danych.
 * 
 * 
 * @return int zwraca 0 w przypadku pomyślnego przekopiowania pliku oraz -1 w przypadku błędu.
 */
int copy_normal(int, char **);
/**
 * @brief funkcja kopiująca plik przy pomocy wywołań systemowych mmap/write. Przyjmuje liczbę argumentów oraz wskaźnik na tablicę w której przechowywane są informacje o
 * ścieżce do pliku źródłowego, docelowego oraz rozmiarze bufra do wczytywania i zapisywania danych.
 * 
 * 
 * @return int zwraca 0 w przypadku pomyślnego przekopiowania pliku oraz -1 w przypadku błędu.
 */
int copy_with_mapping(int, char **);

#endif

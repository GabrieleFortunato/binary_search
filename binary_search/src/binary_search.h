/*
 * binary_search.h
 *
 *  Created on: 23 lug 2017
 *      Author: gabriele
 */

#ifndef BINARY_SEARCH_H_
#define BINARY_SEARCH_H_

/**
 * Assicura che ad ogni lancio il programma generi
 * in modo casuale numeri sempre diversi
 */
void srand_time();

/**
 * Genera in modo casuale la lunghezza dell'array in cui effettuare l'array
 * @post il numero generato deve essere un numero intero maggiore di 0
 * @return
 */
int get_length();

/**
 * Verifica che gli elementi dell'array di dimensione stabilita
 * dal parametro length siano ordinati in maniera crescente
 * @pre il parametro length deve essere un numero intero maggiore di 0
 * @param array
 * @param length
 * @return
 */
bool ordered_array(int* array, int length);a

/**
 * Ordina in maniera crescente gli elementi dell'array di dimensione
 * stabilita dal parametro length
 * @pre il parametro length deve essere un numero intero maggiore di 0
 * @pre gli elementi dell'array non sono ordinati in maniera crescente
 * @post gli elementi dell'array sono ordinati in maniera crescente
 * @param array
 * @param length
 */
void bubble_sort(int* array, int length);

/**
 * Genera in modo casuale gli elementi dell'array di dimensione
 * stabilita dal parametro length
 * @pre il parametro length deve essere un numero intero maggiore di 0
 * @post gli elementi dell'array devono essere ordinati in maniera crescente
 * @param length
 * @return
 */
int* get_ordered_array(int length);

/**
 * Stampa su file gli elementi dell'array di dimensione
 * stabilita dal parametro length
 * @pre il parametro length deve essere un numero intero maggiore di 0
 * @pre il file deve essere aperto
 * @param file
 * @param array
 * @param length
 */
void print_array(FILE* file, int* array, int length);

/**
 * Genera in modo casuale il numero da cercare nell'array
 * @return
 */
int get_number();

/**
 * Stampa su file il numero da cercare nell'array
 * @pre il file deve essere aperto
 * @param file
 * @param number
 */
void print_number(FILE* file, int number);

/**
 * Verifica la presenza di un numero nell'array di dimensione
 * stabilita dal parametro length
 * @pre il parametro length deve essere maggiore di 0
 * @pre gli elementi dell'array devono essere ordinati in maniera crescente
 * @param array
 * @param min
 * @param max
 * @param number
 * @return
 */
bool binary_search(int* array, int min, int max, int number);

/**
 * Stampa su file il risultato della ricerca
 * @pre il file deve essere aperto
 * @param file
 * @param array
 * @param length
 * @param number
 */
void print_search_result(FILE* file, int* array, int length, int number);


#endif /* BINARY_SEARCH_H_ */

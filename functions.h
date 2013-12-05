#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>

char *my_str_n_cpy (char *destination, char *source, int n);
int get_str_size (char *string);
void print_str (char *string);
void create_num_array (int max_numbers, int max_size, int *my_array);
void print_array (int list[50], int num_items);
void binary_search (int my_array[50], int num_items, int target, int *found_ptr);
void bubble_sort (char *string_array[], int num_strings);
int is_palindrome (char *my_string, int string_size, int start_index);
int sum_primes (unsigned int n);
int sum_digits (int n);
int check_prime (int n);

#endif
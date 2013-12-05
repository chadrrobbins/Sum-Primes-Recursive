#include "functions.h"

char *my_str_n_cpy (char *destination, char *source, int n)
{
	int i = 0;
	int size = 0;

	size = get_str_size(destination);

	for (i = 0; i <= n - 1; i++, size++)
	{		
		if (source[i] != NULL)
		{
			destination[size] = source[i];	
		}
		else
		{
			break;
		}
	}

	return destination;
}

int get_str_size (char *string)
{
	int i = 0;
	int size = 0;

	while (string[i] != NULL)
	{
		size++;
		i++;
	}

	return size;
}

void print_str (char *string)
{
	int i = 0;

	while (string[i] != NULL)
	{
		printf("%c", string[i]);
		i++;
	}
	putchar('\n');
}

void create_num_array (int max_number, int max_size, int *my_array)
{
	int random_number = 0;
	int i = 0;

	random_number = rand() % max_number + 1;
	for (i = 0; i < max_size; i++, random_number++)
	{
		my_array[i] = random_number;
	}	
}

void print_array (int list[50], int num_items)
{
	int index = 0;

	for (index = 0; index < num_items; index++)
	{
		printf ("list[%d]: %d\n", index, list[index]);
	}
}

void binary_search (int my_array[50], int num_items, int target, int *found_ptr)
{
	int left_index = 0, right_index = 0, mid_point = 0;

	*found_ptr = -1;
	right_index = num_items - 1;

	while ((*found_ptr == -1) && (left_index <= right_index))
	{
		mid_point = (left_index + right_index) / 2;

		if (my_array[mid_point] == target)
		{
			*found_ptr = mid_point;
		}
		else if (my_array[mid_point] < target)
		{
			left_index = mid_point + 1;
		}
		else if (my_array[mid_point] > target)
		{
			right_index = mid_point - 1;
		}
		else
		{
			printf("Target not found.\n");
		}
	}
}

void bubble_sort (char *string_array[7], int num_strings)
{
	int c = 0, u = 0;
	char *ptr_temp = NULL;

	u = num_strings - 1;

	while (u - 1 != 0)
	{
		c = 1;

		while (c < u)
		{
			if (strcmp(string_array[c - 1], string_array[c]) > 0)
			{
				ptr_temp = string_array[c - 1];
				string_array[c - 1] = string_array[c];
				string_array[c] = ptr_temp;				
			}
			c++;			
		}
		u--;
	}

}

int is_palindrome (char *my_string, int string_size, int start_index)
{
	if (start_index >= string_size)
	{
		printf("The string is a palindrome.\n");
		return 1;
	}
	else if (my_string[start_index] == my_string[string_size - 1])
	{
		return is_palindrome (my_string, string_size - 1, start_index + 1);
	}
	else
	{
		printf("The string is not a palindrome.\n");
		return 0;
	}	
}

int sum_primes (unsigned int n)
{
	if (n > 1)
	{
		n = check_prime(n) + sum_primes(n - 1);
		return n;
	}
	else
	{
		return 0;
	}
}

int check_prime (int n)
{
	int i = 2;
	int remainder = n % 2;

	while (i != n && remainder != 0) //Starting with 2, mod n by every number between 2 and n -1 to see if it is prime.
	{		
		remainder = n % i; 
		i++;
	}
	if (i == n) //i made it all the way to n which means that n is prime
	{
		return n;
	}
	else
	{
		return 0; //i did not make it to n which means that n is not prime
	}	
}
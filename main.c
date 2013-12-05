#include "functions.h"

int main (void)
{
	char destination[50] = {'H', 'E', 'L', 'L', 'O'};
	char source[50] = {'W', 'O', 'R', 'L', 'D'};
	int num_array[50] = {0};
	int found_index = -1;
	char *string_array[7] = {"Chad", "Danielle", "Ellie", "Hayden", "Beckham", "Evie", "Kenzie"};
	char my_string[50] = "racecar";
	int step = 2;
	int count = 2;
	int sum = 0;

	srand((unsigned int) (time (NULL)));

	//Task 1
	/*my_str_n_cpy(destination, source, 6);
	print_str(destination);*/

	//Task 2
	/*create_num_array(100, 40, num_array);
	binary_search(num_array, 40, 69, &found_index);
	printf("Found index: %d\n", found_index);
	print_array(num_array, 40);*/

	//Task 3
	/*print_str(string_array[0]);
	print_str(string_array[1]);
	print_str(string_array[2]);
	print_str(string_array[3]);
	print_str(string_array[4]);
	print_str(string_array[5]);
	print_str(string_array[6]);
	bubble_sort(string_array, 7);
	print_str(string_array[0]);
	print_str(string_array[1]);
	print_str(string_array[2]);
	print_str(string_array[3]);
	print_str(string_array[4]);
	print_str(string_array[5]);
	print_str(string_array[6]);*/

	//Task 4
	//is_palindrome(my_string, 7, 0);

	//Task 5
	sum = sum_primes(11);
	printf("Sum of primes: %d\n", sum);
		
	return 0;
}
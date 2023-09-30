#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

/* Function in merge sort */
void sorted(int *array, int first, int last, size_t n);
int partition(int *array, int first, int last, size_t n);
void swap_ints(int *a, int *b);
int compare_swap(listint_t **list, listint_t **node1, listint_t **node2);
void set_array(int *array, size_t size, int value);
void arraycpy(int *array, int *new_arr, size_t size);
int find_max(int *array, size_t size);
void m_sort(int *ar, int *tmp, size_t l, size_t r);
void merger(int *ar, int *tmp, size_t l, size_t m, size_t r);
void m_print(int *ar, int *tmp, size_t l, size_t m, size_t r);
void m_copyarr(int *source, int *dest, size_t left, size_t right);
void swap_ints(int *a, int *b);
void max_heapify(int *array, size_t size, size_t base, size_t root);
void heap_sort(int *array, size_t size);
int get_max(int *array, int size);
void radix_counting_sort(int *array, size_t size, int sig, int *buff);
void radix_sort(int *array, size_t size);
void swap_ints(int *a, int *b);
void bitonic_merge(int *array, size_t size, size_t start, size_t seq,
		char flow);
void bitonic_seq(int *array, size_t size, size_t start, size_t seq, char flow);
void bitonic_sort(int *array, size_t size);


#endif /* SORT_H */

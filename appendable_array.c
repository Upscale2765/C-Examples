/*
An array that can have data appended to it using malloc
*/
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

struct intarray {
	int num_elements;
	int *arr;
};

typedef struct intarray IntArray;

void append_to_array(IntArray *arr, int element) {
	(*arr).num_elements++;
	(*arr).arr = realloc((*arr).arr, (*arr).num_elements * sizeof(int));

	if ((*arr).arr == NULL) {
		printf("Memory allocation error\n");
		exit(1);
	}

	(*arr).arr[(*arr).num_elements - 1] = element;
}

void print_array(IntArray *arr) {
	for (int i = 0; i < (*arr).num_elements; i++) {
		printf("Array element %d: ", i);
		printf("%d\n", (*arr).arr[i]);
	}
}

int main() {
	IntArray arr;
	arr.num_elements = 1;
	arr.arr = (int*) malloc(arr.num_elements * sizeof(int));

	if (arr.arr == NULL) {
		printf("Memory allocation error\n");
		exit(1);
	}

	arr.arr[0] = 1;

	for (int i = 2; i <= 10; i++) {
		append_to_array(&arr, i);
		print_array(&arr);
		printf("\n");
	}

	free(arr.arr);
	return 0;
}

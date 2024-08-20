#include <stdlib.h>
#include <stdio.h>

int main() {
	// Allocate memory
	int* number = (int*)malloc(sizeof(int));
	int* number_array = (int*)malloc(sizeof(int) * 5);
	char* character = (char*)malloc(sizeof(char));
	double* double_number = (double*)malloc(sizeof(double));
	float* float_number = (float*)malloc(sizeof(float));

	// Assign values to the allocated memory
	*number = 24;

	for (int i = 0; i < 5; i++)
		number_array[i] = i;

	*character = 'a';
	*double_number = 3.14;
	*float_number = 1.61;

	// Print out those vlaues
	printf("Number: %d\n", *number);

	for (int i = 0; i < 5; i++) {
		printf("Number array index %d: ", i);
		printf("%d\n", number_array[i]);
	}

	printf("Character: %c\n", *character);
	printf("Double: %f\n", *double_number);
	printf("Float: %f\n", *float_number);

	// Free the allocated memory
	free(number);
	free(number_array);
	free(character);
	free(double_number);
	free(float_number);

	return 0;
}

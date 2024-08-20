#include <stdlib.h>
#include <stdio.h>

int main()
{
	char input_string[10];

	printf("This program takes a string as an input and prints it back out to the user.\n");
	printf("The string is stored in a buffer of 10 characters.\n");
	printf("When more than 10 characters are entered a buffer overrun occurs causing a segmentation fault\n");

	printf("Enter a string: ");
	scanf("%s", &input_string);

	printf("%s\n", input_string);

	return 0;
}

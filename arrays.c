#include <stdio.h>

int main(int argc, const char *argv[])
{
	int numbers[] = {0,15,22,36};
	
	//iterate through array with normal array indices
	int i = 0;

	//determine the length of the array
	int arraySize = sizeof(numbers) / sizeof(int);
	
	for(i = 0; i < arraySize; i++ )
	{
		printf("element %d == %d\n", i, numbers[i]);
	}
	
	puts("---");

	//iterate through array using pointer arithmetic
	int *ptr = numbers;

	for(i = 0; i < arraySize; i++)
	{
		printf("element %d == %d\n", i, *(ptr + i));
	}

	return 0;
}

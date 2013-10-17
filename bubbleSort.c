#include <stdio.h>
#define SIZE 5
int main(void)
{
	int array[SIZE] = {56,34,100,4,15};
	
	int j;
	printf("Unsorted Array:\n");
	for(j = 0; j < SIZE; j++)
	{
		printf("%d\t",array[j]);
	}
	puts("\n\n");
	
	int i;
	for(i = 0; i < SIZE; i++)
	{
		if((i < (SIZE -1)) && (array[i] > array[i + 1]))
		{
			int temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			i = -1;
		}
	}
	
	int k;
	printf("Sorted Array:\n");
	for(k = 0; k < SIZE; k++)
	{
		printf("%d\t",array[k]);
	}
	putchar('\n');
	
	return 0;
}

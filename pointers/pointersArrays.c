#include <stdio.h>

int main() 
{
	int numbers[] = {1,4,5};
	int *pointer = numbers;
	
	for(int i = 0; i < 3; i++)
	{
		printf("array at element %d holds value: %d has mem addr of: %p\n",i,numbers[i],&numbers[i]);
		printf("mem addr of pointer is: %p value held at mem addr is:%d\n",pointer,*(pointer + i));
	}
	
	return 0;
}

#include <stdio.h>

int main()
{
	int x = 50, y = 34;
	int *xPoint = &x;
	int *yPoint = &y;

	printf("Address of x: %p \n", &xPoint);
	printf("Value of x: %d \n", *xPoint);
	printf("Address of y: %p \n", &yPoint);
	printf("Value of y: %d \n", *yPoint);
	
	return 0;
}

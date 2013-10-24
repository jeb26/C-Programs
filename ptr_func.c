#include <stdio.h>
#define N 3

void func();

int main(void)
{
	int a[] = {1 , 5, 56};
	int b[] =  {10, 55, 96};

	func(a,b);

	return 0;
}

void func(int *a1, int *b1)
{
	int *ptr_1, *ptr_2;
	ptr_1 = a1;
	ptr_2 = b1;

	int i;
	for(i = 0; i < N; i++)
		printf("a[%d]: %d b[%d]: %d\n", i, ptr_1[i], i, ptr_2[i]);
}

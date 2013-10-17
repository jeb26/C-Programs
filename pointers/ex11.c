#include <stdio.h>

int j, k;
int *ptr;

int main(void)
{
	j = 1;
	k = 2;
	ptr = &k;
	
	putchar('\n');
	
	printf("j has the value of %d and is stored at %p\n", j, (void *)&j);
	printf("k has the value of %d and is stored at %p\n", k, (void *)&k);
	printf("ptr has the value of %p and is stored at %p\n", ptr, (void *)&ptr);
	printf("the value of the integer pointed to by ptr is %d\n", *ptr);
	
	return 0;
}

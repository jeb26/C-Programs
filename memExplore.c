/**
	Simple C program that declares 5 variables and displays their memory
	addresses.
**/

#include <stdio.h>

int main() 
{
	int var1 = 1, var2 = 2, var3 = 3, var4 = 4, var5 = 5;

	printf("%p\n%p\n%p\n%p\n%p\n", &var1, &var2, &var3, &var4, &var5);	
	
	return 0;
}

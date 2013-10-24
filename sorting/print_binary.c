#include <stdio.h>

int main(int argc, const char *argv[])
{
	float num = 1.75;

	printf("%ld\n", *(unsigned long *)(num));

	return 0;
}

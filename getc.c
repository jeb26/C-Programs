#include <stdio.h>

int main()
{
	FILE *f;
	f = fopen(__FILE__,"r");
	int b;
	int i;
	for (i = 0; (b = getc(f)) != EOF; i++)
		printf("Byte %d = %X\n",i+1,b);
	fclose(f);
	return 0;
}

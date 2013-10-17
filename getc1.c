#include <stdio.h>

int main()
{
	FILE *f;
	f = fopen(__FILE__,"r");
	char b;
	
	while(feof(f) != 1)
	{
		b = getc(f);
		printf("Current Char = %c\n",b);
	}
	
	fclose(f);
	return 0;
}

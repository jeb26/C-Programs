#include <stdio.h>

int main()
{
	FILE *f;
	f = fopen(__FILE__, "r");
	char word[255];
	
	while(!feof(f))
	{
		fscanf(f,"%s",word);
		puts(word);
	}
	
	fclose(f);
	return 0;
}

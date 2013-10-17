#include <stdio.h>
#include <string.h>

int main()
{
	FILE *f;
	f = fopen("myFile1.txt","w");
	char* txt = "Hello Beautiful...";
	
	fwrite(txt,1,strlen(txt),f);
	
	fclose(f);
	
	return 0;
}

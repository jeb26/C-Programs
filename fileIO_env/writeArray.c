#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	FILE *f;
	f = fopen("namesOfGirls.txt","w");
	
	int i;
	for(i = 1; i < argc; i++)
	{
		fwrite(argv[i],1,strlen(argv[i]),f);
		fprintf(f,"\n");
	}
	
	fclose(f);
	
	return 0;
}

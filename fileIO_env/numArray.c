#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replicateFile(char*,char*);

int main(int argc, char* argv[])
{
	char* userInFile = argv[1];
	char* userOutFile = argv[2];
	
	replicateFile(userInFile,userOutFile);
	
	return 0;
}

void replicateFile(char* input, char* output)
{
	FILE *in = fopen(input,"r");
	FILE *out = fopen(output,"w");
	
	//declare variables which hold indivdual chars
	int c;
	while(c = getc(in) != EOF)
	{
		//copy each char to output destination
		fprintf(out,"%c",(char)c);
	}
	fprintf(out,"\n");
	
	fclose(in);
	fclose(out);
}

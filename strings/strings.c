#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	//program which uses strcopy function to read in data from console
	char sentence[255];
	
	printf("please enter data to store: \n\n");
	strcpy(sentence, argv[1]);
	
	puts(sentence);
	
	return 0;
}

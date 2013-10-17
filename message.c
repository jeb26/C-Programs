#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	int wordCount = strlen(argv[1]);	
	
	char message[wordCount];
	
	strcpy(message, argv[1]);
	
	puts("\n");
	
	if()
	{
		
	}
	else
	{
		int i;
		for(i = 0; i < wordCount; i++)
		{
			printf("%c  ", message[i]);
		}
		puts("\n");
	}
	
	return 0;
}

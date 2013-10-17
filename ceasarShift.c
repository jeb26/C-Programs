#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	//Number of characters to shift
	int shift = atoi(argv[1]);	
	
	//Actual message to shift
	char const * message = argv[2];
	
	/**
	char letters[26] = {
			    'a','b','c','d','e','f',
			    'g','h','i','j','k','l','m',
			    'n','o','p','q','r','s','t','u',
			    'v','w','x','y','z'
			   };
	**/
			   
	int i;
	for(i = 0; i < strlen(message); i++)
	{
		printf("%c ", message[i] + shift);
	}
	putchar('\n');
	
	return 0;
}


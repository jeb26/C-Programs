/**
	Simple C Program that will attempt to compare two strings via pointers to
	values.
**/

#include <stdio.h>
#include <string.h>

int main()
{
	char* userInput1;
	
	printf("> ");
	scanf("%s",userInput1);
	
	printf("You entered: %s\n",userInput1);
	
	return 0;
}

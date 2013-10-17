#include <stdio.h>

int main()
{
	char input[20];

	printf(">");	

	gets(input);

	printf("You entered the following: \n%s",input);
	
	return 0;
}


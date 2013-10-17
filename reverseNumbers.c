/**
 C Program illustrating the use of arrays. Program reads in 10 integers
 and then displays then in reversed order.
**/

#include <stdio.h>

int main()
{
	printf("Please enter input:\n> ");
	
	//Grabs input using fgets and character buffers
	
	/**
	char buff1[5];
	char buff2[5];
	
	fgets(buff1,5,stdin);
	fgets(buff2,5,stdin);
	
	printf("\nYou entered: %s and %s\n",buff1,buff2);
	**/
	
	//Grabs input using scanf and pointers
	
	char * input;
	
	scanf("%s",&input);
	
	printf("\nYou entered: %s\n",input);
	
	return 0;
}

/**
	Simple C Program that will use an argument vector to display different 
	messages to the user.

	Write a C program that has the capablity to display four different 
	messages about different career paths. If the program is called 
	with the -c switch computer science info is displayed. -i switch
	IT info is displayed. -s switch sys artitect info. -r retail.
**/

#include <stdio.h>

//int main(int argc, char** args)
int main(int argc, const char* argv[])
{
	int i;
	for(i = 0; i < argc; i++)
	{
		if(strcmp("-c", argv[i]) == 0)
		{
			printf("\nComputer Science:\n");
			printf("The study of the principles and use of computers.\n");
		}
		else if(strcmp("-i", argv[i]) == 0)
		{
			printf("\nInformation Systems:\n");
			printf("The study of the communication in an organization.\n");
		}
		else if(strcmp("-s", argv[i]) == 0)
		{
			printf("\nSystems Architect:\n");
			printf("The high level designer of a system.\n");
		}
		else if(strcmp("-r",argv[i]) == 0)
		{
			printf("\nRetail:\n");
			printf("Person working where goods are sold to the public.\n");
		}		
	}	
	
	return 0;
}

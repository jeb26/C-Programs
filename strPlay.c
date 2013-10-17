/**
	Simple C Program that will use the strcopy command. Declare a
	character array of size 60. Fill with information related to the 
	company you will be starting.

	Do the same thing with a char*
**/

#include <stdio.h>
#include <string.h>

int main()
{
	//Declaration of character array of size 60
	char companyInfo[60];
	
	//Using strcopy to fill character array with company information
	strcpy(companyInfo, "The company will be a consulting firm");

	printf("%s\n",companyInfo);	

	return 0;
}


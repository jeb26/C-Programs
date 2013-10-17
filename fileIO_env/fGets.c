#include <stdio.h>

int main()
{
	char userName[6];
	char userHome[20];

	fgets(userName, 6, stdin);
	fgets(userHome, 20, stdin);

	printf("\n\nHi %s \nNever heard of the hometown %s before ", 
	userName,userHome);
	
	return 0;
}

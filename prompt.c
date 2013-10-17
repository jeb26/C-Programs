#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool flag = true;
	char userChoice;
	int acc = 0;
	
	printf("Would you like to continue?\n");
	
	while(acc < 5)
	{
		userChoice = getchar(); getchar();
		printf("You inputted: %c \n", userChoice);
		printf("Enter a choice: ");
		acc++;	
	}	

	printf("\n\nexiting...\n\n");
	
	return 0;
}

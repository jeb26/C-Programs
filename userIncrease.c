/**
	Simple C program that will initalize an integer scalar to 1 and then
	indirectly increase this scalar by 10. 

	Then the program will ask the 
	user if he would like to make customizations. If yes then program
	will prompt user to enter an inital value and an incrment value and 
	will perform operations.
**/

#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool flag = true;
	char userChoice;
	int userIncrement;
	
	//Declaration of scalar
	int scalar = 1;

	//Declaration of pointer to scalar for indirect manipulations
	int *pointer = &scalar;

	//Display init value
	printf("\nInitial scalar value: %d\n\n", scalar);

	//Indirect increment of scalar by 10
	*pointer = (*pointer + 10);

	//Display incremented value
	printf("Current value of scalar is: %d\n\n", scalar);
	
	//Prompt user if customizations should be made
	printf("Would you like change the values (Y/N) ?\n");
	printf("> ");
	
	while(flag)
	{
		scanf("%c", &userChoice);

		if(userChoice == 'N' || userChoice == 'n')
			{
				flag = false;
			}
		else 
		{
			printf("Enter value to increment\n> ");
			scanf("%d",&*pointer);

			printf("Enter increment amount\n> ");
			scanf("%d",&userIncrement);

			*pointer = (*pointer + userIncrement);

			printf("\nResult\n>%d\n\n", *pointer);
			
		}

		printf("Would you like change the values (Y/N) ?\n");
		printf("> ");
	}
	
	return 0;
}

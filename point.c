/**
	Simple C program that will declare an initial integer value. 
	And indirectly increment that value by 10 via a pointer. 
**/

#include <stdio.h>

int main()
{
	//Declaration of the initial value	
	int initValue = 1;

	//Declaration of a pointer to the initial value
	int *point = &initValue;

	//Display initial value
	printf("The init value is: %d\n\n", initValue);

	//Increment initial value via pointer by 10
	*point = (*point + 10);

	//Display to user the final value
	printf("*point is: %d\n",*point);
	printf("initValue is: %d\n\n",initValue);

	return 0;
}

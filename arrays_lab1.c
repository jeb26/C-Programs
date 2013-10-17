#include <stdio.h>
//Symbolic constant
#define LENGTH_OF_WEEK 7

int main()
{
	int days[LENGTH_OF_WEEK] = {0,1,2,3,4,5,6};	
	
	int i;
	
	char* dayName = NULL;

	for(i = 0; i < LENGTH_OF_WEEK; i++)
	{		
		switch(days[i])
		{
			case 0: dayName = "Monday";
				break;
			case 1: dayName = "Tuesday";
				break;
			case 2: dayName = "Wednesday";
				break;
			case 3: dayName = "Thursday";
				break;
			case 4: dayName = "Friday";
				break;
			case 5: dayName = "Saturday";
				break;
			case 6: dayName = "Sunday";
				break;
		}
	
		printf("Today is: %s \n",dayName);
	}

	return 0;
}

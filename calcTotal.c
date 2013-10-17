#include <stdio.h>
#include <stdarg.h>

int calculateTotal(int n, ...)
{
	//declartion of a datatype that would hold all arguments
	va_list arguments;
	
	//starts iteration of arguments
	va_start (arguments, n);
	
	//declarion of initialization for 'for loop'
	//declation of accumulator
	int i = 0;
	int localTotal = 0;
	
	for(i; i < n; i++)
	{
		//va_arg allows access to an individual argument
		int currentArgument = va_arg(arguments, int);
		localTotal += currentArgument;
	}
	
	//freeing the declaration of the datatype that holds the information
	va_end(arguments);
	
	return localTotal;
}

int main()
{
	int total = calculateTotal(2,7,7);
	printf("Total > %d\n",total);
	
	return 0;
}

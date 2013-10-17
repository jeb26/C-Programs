#include <stdio.h>
#include <stdlib.h>

//function prototype
int addTwoNumbers(int, int);

int main(int argc, const char* argv[])
{
	//function implementation
	int ans  = addTwoNumbers(atoi(argv[1]),atoi(argv[2]));
	
	printf("Answer is: %d", ans);
	puts("\n");
	
	return 0;
}

//function definition
int addTwoNumbers(int x, int y)
{
	int ans = (x + y);
	
	return ans;
}


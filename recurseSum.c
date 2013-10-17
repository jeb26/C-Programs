#include <stdio.h>
#include <stdlib.h>

int sum(int);

int main(int argc, const char* argv[])
{
	int userInput = atoi(argv[1]);
	int ans = sum(userInput);
	
	printf("%d\n",ans);
	
	return 0;
}

int sum(int aNum)
{
	int total = 0;
	
	if(aNum > 0)
	{
		total = aNum + sum(aNum - 1);
	}
	
	return total;
}

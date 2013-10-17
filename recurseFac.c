#include <stdio.h>
#include <stdlib.h>

int fac(int);

int main(int argc, const char* argv[])
{
	int userInput = atoi(argv[1]);
	int ans = fac(5);
	
	printf("%i\n",ans);
	return 0;
}

int fac(int aNum)
{
	int total;
	
	if(aNum > 1)
	{
		total = total * fac(aNum - 1);
		return total;
	}
	else
	{
		return 1;
	}
}

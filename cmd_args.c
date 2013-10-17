#include <stdio.h>

int main(int argc, const char* argv[])
{
	//display the arguments passed to program

	int i;
	for(i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
		
	return 0;
}


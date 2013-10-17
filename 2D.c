#include <stdio.h>

int main(int argc, const char *argv[])
{
	char *temp = "NetworkPasswordIsPAssword";

	char *names[] = {
		"Tyler", "Jonathon"
	}; 

	printf("sizeof names: %u\nthe size of a string is:%u\n", 
		sizeof(names), sizeof(temp));

	printf("iterate through array\n");
	
	int arrLength = sizeof(names) / 4;

	int i = 0;
	int j = 0;
	for(i = 0; i < arrLength; i++)
	{
		for(j = 0; names[i][j] != '\0' ; j++)
		{
			printf("%c ", names[i][j]);
		}
		puts("\n");
	}

	return 0;
}

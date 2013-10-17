#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char name[100];

	strncpy(name,argv[1],100);

	printf("%s\n", name);

	return 0;
}

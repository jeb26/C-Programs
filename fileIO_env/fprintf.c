#include <stdio.h>

int main()
{
	//declaration of a file object or file HANDLE
	FILE *f;

	f = fopen("myfile.txt","w");
	fprintf(f,"Hey Buddy!");
	fclose(f);
	
	return 0;
}

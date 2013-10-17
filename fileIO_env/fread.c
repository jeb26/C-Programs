#include <stdio.h>
#include <stdlib.h>

long getFileSize(FILE*);
char* readAllText(char*);


int main()
{
	char* fileData = readAllText(__FILE__);
	puts(fileData);
	free(fileData);
	
	return 0;
}

long getFileSize(FILE *filePointer)
{
	long fSize;
	fseek(filePointer, 0, SEEK_END);
	fSize = ftell(filePointer);
	rewind(filePointer);
	
	return fSize;
}

char* readAllText(char* filePath)
{
	FILE *f = fopen(filePath, "r");
	int fileSize = getFileSize(f);
	char* buffer = (char*)malloc(sizeof(char) *fileSize+1);
	fread(buffer, 1, fileSize, f);
	fclose(f);
	
	return buffer;
}

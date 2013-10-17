#include <stdio.h>

int main()
{
	char mainStr[100] = "this is a string";
	char strCopy[100];
	
	char* mainPointer;
	char* copyPointer;
	
	mainPointer = mainStr;
	copyPointer = strCopy;
	
	while(*mainPointer != '\0')
	{
		*copyPointer++ = *mainPointer++;
	}
	*copyPointer = '\0';
	puts(strCopy);

	return 0;
}

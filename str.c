#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *str = "hoboken";
	char *t = malloc(sizeof(char) * strlen(str));

	strcpy(t, str);

	printf("%s\n",t);

	return 0;
}

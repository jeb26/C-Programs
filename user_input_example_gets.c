#include <stdio.h>

int main()
{
	char favColor[1];

	printf("What is your favorite color? ");
	fgets(favColor);
	printf("\nThanks, Buddy! Now I know you fav color is %s\n",favColor);

	return 0;
}

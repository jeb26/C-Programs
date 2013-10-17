#include <stdio.h>

void recTest(int i)
{
	if(i > 0)
	{
		recTest(i - 1);
		printf("%i\n",i);
	}
}

int main()
{
	recTest(5);
}

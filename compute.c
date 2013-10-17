#include <stdio.h>

int compute(int n);

int main(int argc, const char *argv[])
{
	int i;
	for(i = 0; i < 11; i++)
	{
		double sum;
		sum = compute(i);

		printf("f(%d) is : %f\n", i, sum);
	}

	return 0;
}

int compute(int n)
{
	double sum;

	if (n >= 1)
	{
		sum = (1.05)*(compute(n-1));
		return sum;
	}
	else
	{
		return 1000;
	}
	
}

#include <stdio.h>
#define BINS 5

int main(int arg, const char* argv[])
{
	int cnt[] = {1, 0, 2, 2, 1};
	int map[BINS];
	map[0] = 0;

	int i;
	for(i = 1; i < BINS + 1; i++)
	{
		map[i] = cnt[i -1] + map[i - 1];
	}

	printf("map: ");
	for(i = 0; i < BINS; i++)
	{
		printf("%d ", map[i]);
	}
	putchar('\n');


	return 0;
}

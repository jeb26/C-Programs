#include <stdio.h>
#define BINS 16

int main(int argc, const char *argv[])
{
	int list[] = {0x65c6, 0xbeb, 0x96ba, 0x9a7d};
	int cnt[BINS];
	int map[BINS];
	map[0] = 0;
	int mask = 0xf;
	int i;

	//initalize count
	for(i = 0; i < BINS; i++)
		cnt[i] = 0;

	//count the first significant digit
	for(i = 0; i < 4; i++)
	{
		cnt[list[i] & mask]++;
	}

	//compute the map
	for(i = 1; i < BINS; i++)
	{
		map[i] = (map[i - 1] + cnt[i - 1]);
	}

	//print the cnt
	printf("cnt: ");
	for(i = 0; i < BINS; i++)
		printf("%d ", cnt[i]);
	putchar('\n');

	//print the map
	printf("map: ");
	for(i = 0; i < BINS; i++)
		printf("%d ", map[i]);
	putchar('\n');

	printf("%d\n", cnt[0]);

	return 0;
}

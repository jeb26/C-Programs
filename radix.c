#include <stdio.h>
#define BINS 16
#define GROUP 4

int main(int argc, const char *argv[])
{
	int mask = 0xf;
	int i, j;
	int list[] = {0x65c6, 0xbeb, 0x96ba, 0x9a7d};
	int buffer[GROUP];
	int *temp;
	int cnt[BINS];
	int map[BINS];
	map[0] = 0;

	j = 0;
	while(j < 4)
	{
		//initalize count
		for(i = 0; i < BINS; i++)
			cnt[i] = 0;

		//count significant digits
		for(i = 0; i < GROUP; i++)
			cnt[(list[i] >> i*GROUP) & mask]++;

		//initalize map
		for(i = 0; i < BINS; i++)
			map[i] = 0;

		//compute the map
		for(i = 1; i < BINS; i++)
		{
			map[i] = (map[i - 1] + cnt[i - 1]);
		}

		//shift the elements in buffer
		for(i = 0; i < GROUP; i++)
		{
			buffer[map[(list[i]  >> i*GROUP) & mask]++] = list[i];
		}
		
		//perform swap with list[], buff[], using temp[]
		temp = list;
		//list = *buffer;
		//buffer = temp;

		j++;
	}

	/*
	//print list
	printf("after shift: ");
	for(i = 0; i < GROUP; i++)
	{
		printf("0x%x ", buffer[i]);
	}
	putchar('\n');
	*/

	/*
	//print buffer
	printf("after shift: ");
	for(i = 0; i < GROUP; i++)
	{
		printf("0x%x ", buffer[i]);
	}
	putchar('\n');
	*/

	return 0;
}

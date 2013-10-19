#include <stdio.h>
#define BINS 16
#define GROUP 4

int main(int argc, const char *argv[])
{
	int mask = 0xf;
	int i, j;
	int list[] = {0x65c6, 0xbeb, 0x96ba, 0x9a7d};
	int buffer[GROUP];
	int *temp, *src, *dest;
	int cnt[BINS];
	int map[BINS];
	map[0] = 0;

	src = list;
	dest = buffer;

	//print unsorted list
	printf("unsorted list: \n");
	for(i = 0; i < GROUP; i++)
	{
		printf("int: %d hex: 0x%x ", src[i], src[i]);
	}
	putchar('\n');
	
	j = 0;
	while(j < 4)
	{
		//initalize count
		for(i = 0; i < BINS; i++)
			cnt[i] = 0;

		//computing cnt
		for(i = 0; i < GROUP; i++)
			cnt[(src[i] >> i*GROUP) & mask]++;

		//initalize map
		for(i = 0; i < BINS; i++)
			map[i] = 0;

		//compute the map
		for(i = 1; i < BINS; i++)
		{
			map[i] = (map[i - 1] + cnt[i - 1]);
		}

		//shift the elements in buffer[] via pointer *dest and *src
		for(i = 0; i < GROUP; i++)
		{
			dest[map[(src[i]  >> i*GROUP) & mask]++] = src[i];
		}
		
		//perform swap of list[] and buff[], with int *temp, *src, *dest
		temp = src;
		src = dest;
		dest = src;

		j++;
	}

	//print list
	putchar('\n');
	printf("list after shifting: \n");
	for(i = 0; i < GROUP; i++)
	{
		printf("int: %d hex: 0x%x ", src[i], src[i]);
	}
	putchar('\n');

	//print buff
	printf("buffer after shifting: \n");
	for(i = 0; i < GROUP; i++)
	{
		printf("int: %d hex: 0x%x ", dest[i], dest[i]);
	}
	putchar('\n');

	return 0;
}

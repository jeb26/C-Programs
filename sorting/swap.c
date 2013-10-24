/*
   RADIX SORT FOR UNSIGNED 4 BIT NUMBERS
*/
#include <stdio.h>
#define BINS 256
#define N 4
#define GROUP 8
#define MASK 0xf

void dump_array(char *message, size_t n, int a[n]);
void correct();

int main(int argc, const char *argv[])
{
	int i, j;
	int list[] = {0x7d8d4e2e,0x7de798ea,0x777f3567, 0x78b4f702};
	int buffer[N];
	int *temp, *src_ptr, *dest_ptr;
	int cnt[BINS];
	int map[BINS];
	map[0] = 0;

	src_ptr = list;
	dest_ptr = buffer;

	//print unsorted list
	dump_array("unsorted list: ", N, src_ptr);

	j = 0;
	while(j <= N)
	{
		//initalize count
		for(i = 0; i < BINS; i++)
			cnt[i] = 0;
		
		//count significant digits
		for(i = 0; i < GROUP; i++)
			cnt[(src_ptr[i] >> j*GROUP) & MASK]++;

		//initalize map
		for(i = 0; i < BINS; i++)
			map[i] = 0;

		//compute the map
		map[0] = 0;
		for(i = 1; i < BINS; i++)
		{
			map[i] = (map[i - 1] + cnt[i - 1]);
		}

		//shift the elements in buffer
		for(i = 0; i < GROUP; i++)
		{
			dest_ptr[map[(src_ptr[i] >> j*GROUP) & MASK]++] = src_ptr[i];
		}

		//perform a swap and print the list which should be the buffer
		//list[] buffer[] int *temp
		temp = src_ptr;
		src_ptr = dest_ptr;
		dest_ptr = temp;
	
		j++;
	}

	//printf iA sorted list
	dump_array("sorted list: ", GROUP, src_ptr);

	//correct(src_ptr);

	return 0;
}

void dump_array(char *message, size_t n, int a[n])
{
	printf("%s\n", message);
	int i;
	for(i = 0; i < n; i++)
	{
		printf("int: %d hex: 0x%x\n", a[i], a[i]);
	}
}

void correct(int *l)
{
	int negStartLoc;
	int *list;
	int temp[GROUP];

	list = l;
	int i;
	for(i = 0; i < GROUP; i++)
	{
		if (list[i] < 0)
		{
			negStartLoc = i;
			break;
		}
	}

	for(i = 0; i < (GROUP - negStartLoc); i++)
	{
		temp[i] = list[negStartLoc + i];
	}

	dump_array("temp: ", GROUP, temp);
}

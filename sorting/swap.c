#include <stdio.h>
#define BINS 16
#define GROUP 4
#define MASK 0xf

void dump_array(char *message, size_t n, int a[n]);

int main(int argc, const char *argv[])
{
	int i, j;
	int list[] = {0x65c6, 0xbeb, 0x96ba, 0x9a7d};
	int buffer[GROUP];
	int *temp, *src_ptr, *dest_ptr;
	int cnt[BINS];
	int map[BINS];
	map[0] = 0;

	src_ptr = list;
	dest_ptr = buffer;

	//print unsorted list
	dump_array("unsorted list: ", GROUP, src_ptr);

	j = 0;
	while(j <= 4)
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

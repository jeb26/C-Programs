/*
   RADIX SORT FOR UNSIGNED 8 BIT NUMBERS TO MATCH PRACTICE EXAM
*/
#include <stdio.h>
#define N 4
#define BIN 256
#define MAXBIT 32

void radix_sort();
void dump_array();
void correct();

int main(int argc, char **argv)
{
	int i, group = 8, bin = 256;
	int buff[N];
	int lst[] = {0x7fda8d60, 0x7e03cffb, 0x7b65dedb, 0x7a395300};
	int sorted[] = {0x7e03cffb,0x7fda8d60,-0x7b65dedb,-0x7a395300};

	dump_array("original: ", N, sorted);
	//radix_sort(0, lst, buff);

	//flag = LST;
	/*
	for(i =0; i < MAXBIT; i = i + group)
	{
		radix_sort(i, lst, buff);
	}
	*/
	correct(sorted);
	dump_array("after sort iA: ", N, sorted);
}

void radix_sort(int idx, int *l, int *b)
{
	int i, j, k, mask = 0xff, group = 8, bin = BIN;	
	int tmp[4], count[BIN], map[BIN];
	int *src_ptr, *dst_ptr;

	//set src_p and dst_p
	if((idx % 2) == 0)
	{
		src_ptr = l;
		dst_ptr = b;
	}
	else
	{
		src_ptr = b;
		dst_ptr = l;
	}
	
	//init count, compute cnt
	//init the count
	for(i = 0; i < BIN; i++)
	{
		count[i] = 0;
	}
	//compute count
	for(i = 0; i < N; i++)
	{
		count[(src_ptr[i] >> idx) & mask]++;
	}
	//dump_array("count: ", BIN, count);

	
	//map
	//init the map
	for(i = 0; i < BIN; i++)
	{
		map[i] = 0;
	}

	//comput the map
	for(i = 1; i < BIN; i++)
	{
		map[i] = (map[i - 1] + count[i - 1]);
	}

	//move
	
	for(i = 0; i < N; i++)
	{
		dst_ptr[map[(src_ptr[i] >> idx)& mask]++] = src_ptr[i];
	}
	//dump_array("after 1st move: ", N, dst_ptr);
}

void correct(int *original)
{
	int i, neg_pos, total_negs, total_pos;
	int buff[N];
	int *ptr;
	ptr = original;

	//determine where negs begin
	for(i = 0; i < N; i++)
	{
		if(ptr[i] < 0)
		{
			neg_pos = i;
			break;
		}
	}

	printf("neg_pos is");

	//compute number of positive and negatives
	total_negs = (N - neg_pos);
	total_pos = (N - total_negs);
	//shift negtives to front of buffer
	for(i =0; i < total_negs; i++)
	{
		buff[i] = ptr[i + neg_pos];
	}
	//shift positives to end of buff
	for(i = 0; i < total_pos; i++)
	{
		buff[i + neg_pos] = ptr[i];
	}
	//transfer buff contents to original
	for(i = 0; i < N; i++)
	{
		ptr[i] = buff[i];
	}
}

void dump_array(char * message, int size, int a[])
{
	printf("%s\n", message);
	
	int i;
	for(i = 0; i < size; i++)
	{
		printf("i: %d cnt: int %d hex: 0x%x\n", i, a[i], a[i]);
	}
}

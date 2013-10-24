#include <stdio.h>
#define size 10

void dump_array();

int main(void)
{
	int a[] = {23, 58, 100, 500, 808, -58, -15, -10, -9, -2};
	int temp[size];
	int i, neg_pos;
	
	dump_array("original: ", size, a);

	for(i = 0; i < size; i++)
	{
		if(a[i] < 0)
		{
			neg_pos = i;
			break;
		}
	}
	int num_negs = (size - neg_pos);
	int num_pos = (size - num_negs);

	//shift negatives to beginning of buff
	for(i = 0; i < num_negs; i++)
	{
		temp[i] = a[neg_pos + i];
	}
	
	//shift positives to end of buffer
	for(i =0; i < num_pos; i++)
	{
		temp[neg_pos + i] = a[i];
	}
	
	//transfer buff contents to originl
	for(i = 0; i < size; i++)
	{
		a[i] = temp[i];
	}
	dump_array("final: ", size, a);

	return 0;
}

void dump_array(char *msg, size_t len, int *a)
{
	printf("%s: ", msg);
	int i;
	for(i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	putchar('\n');
}

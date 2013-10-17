#include <stdio.h>
#define ADDRESSES 5
#define OCTETS 4

int main()
{	
	//const int addresses = 5, octets = 4;

	int ips[ADDRESSES][OCTETS] = {
		{192,168,1,1},
	  	{192,168,1,100},
	     	{12,68,241,3},
		{15,14,15,9},
		{127,0,0,1}          };
	
	//ips[0][0] = 192; ips[0][1] = 168; ips[0][2] = 1; ips[0][3] = 1;
	//ips[1][0] = 192; ips[1][1] = 168; ips[1][2] = 1; ips[1][3] = 100; 
	//ips[2][0] = 12; ips[2][1] = 63; ips[2][2] = 10; ips[2][3] = 50; 
	//ips[3][0] = 68; ips[3][1] = 59; ips[3][2] = 2; ips[3][3] = 245; 
	//ips[4][0] = 127; ips[4][1] = 0; ips[4][2] = 0; ips[4][3] = 1;  
	
	int i;
	int j;
	for(i = 0; i < ADDRESSES; i++)
	{
		//for(j = 0; j < octets; j++)
		//{
		//	printf("%d (x%X),", ips[i][j], ips[i][j]);
		//}
		//printf("\n");
		printf("%d.%d.%d.%d \n", ips[i][0],
					 ips[i][1],
					 ips[i][2],
					 ips[i][3] );
	}
	
	return 0;
}

//compile with -std=c99 to initialize starter for loop
//when using static arrays you should define symbolic constants

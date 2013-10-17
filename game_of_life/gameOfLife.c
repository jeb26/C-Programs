#include <stdio.h>
#include <time.h>

//First think about what functionality we will need for this program and as you think
//the requirements you should write them out as your prototypes.

#define ROWS 20
#define COLS 79

//set some global arrays for the program
//counter for the number of generations that have been processed
int generation = 0;

//population to keep track of the number of nodes or cells alive
int population = 0;
int populationMax = 0;
int populationMin = 0;

//Two arrays must function at the same time. One you are building and the current 
//that is alive
int tempGrid[ROWS][COLS];

//function that allows the user to set the number of generations that he would like to
//see
int getUserInput();
//C needs to know how big an array is otherwise it wont compile
void initGrid(int, int, int[ROWS][COLS]);

void processGeneration(int, int, int[ROWS][COLS]);

//have to count how many neighbors are around a specific cell
int countNeighbors(int, int, int[ROWS][COLS], int, int);

//display Grid
void printGrid(int, int, int[ROWS][COLS]);

//must be able to sleep between each generation and iteration
void sleep(unsigned int);

int main()
{
	//takes current and uses as seed for random number gen
	srand((unsigned int) time(NULL));
	
	int grid[ROWS][COLS];
	initGrid(ROWS, COLS, grid);
	
	printGrid(ROWS, COLS, grid);
	
	int i, g;
	g = getUserInput();
	
	for(i = 0; i < g; i++)
	{
		generation++;
		processGeneration(ROWS, COLS, grid);
		printGrid(ROWS, COLS, grid);
		sleep(100);
	}
	
	return 0;
}
// *********************************************
int getUserInput()
{
	int g;
	printf("Thanks for playing the game of life!\n");
	printf("How many generations do you want to watch?\n");
	scanf("%d", &g);
	
	return g;
}
// *********************************************
void initGrid(int rows, int cols, int g[rows][cols])
{
	int i, j, k;
	//first for loop will iterate through rows
	for(i = 0; i < rows; i++)
	{
		//second loop iterates through cols
		for(j = 0; j < cols; j++)
		{
			/**Must set all outer elements to be -1
			   [-1] [-1] [-1] [-1] [-1]
			   [-1] [  ] [  ] [  ] [-1]
			   [-1] [  ] [  ] [  ] [-1]
			   [-1] [-1] [-1] [-1] [-1]
			   creates a contained area for inside cells to
			   contain the data.
			 **/
			 if(i == 0 || i == (rows - 1) || j == 0 || j == (cols - 1))
			 	g[i][j] = -1;
			 else 
			 {
			 	//assign a random number k
			 	 k = rand() % 3;
			 	 if(k == 0)
			 	 {
			 	 	//set element in current position to 1 and increment population
			 	 	g[i][j] = 1;
			 	 	population++;
			 	 }
			 	 else g[i][j] = 0;
			 }
		}
	}
	processGeneration(rows, cols, g);
}
// *********************************************
void processGeneration(int rows, int cols, int g[rows][cols])
{
	int i, j, neighbors;
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			//if on an element set to -1. then that is a border ignore and move to next iteration
			if(g[i][j] == -1) continue;
			neighbors = countNeighbors(rows, cols, g, i, j);
			
			if(g[i][j] == 1 && (neighbors < 2 || neighbors > 3))
				tempGrid[i][j] = 0;
			else if((g[i][j] == 0) && (neighbors == 3))
				tempGrid[i][j] = 1;
		}
	}
	
	population = 0;
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			if(g[i][j] == -1) continue;
			if(tempGrid[i][j] == 1) population++;
			g[i][j] = tempGrid[i][j];
		}
	}
	if(population > populationMax) 
		populationMax = population;
	if(population < populationMin || populationMin == 0) 
		populationMin = population; 
}
// *********************************************
int countNeighbors(int rows, int cols, int g[rows][cols], int x, int y)
{
	int n = 0, i, j;
	for(j = y - 1; j < y + 2; j++)
	{
		for(i = x - 1; i < x + 2; i++)
		{
			if(i == x && j == y) continue;
			if(g[i][j] != -1) n += g[i][j];
		}
	}
	return n;
	
}
// *********************************************
void printGrid(int rows, int cols, int g[rows][cols])
{
	system("clear");
	printf("Welcome to the Game of Life -- Generation %d\n", generation);
	printf("Population: %d (MAX: %d MIN: %d)\n", population
						   , populationMax
						   , populationMin);
						   
	int i, j;
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			switch(g[i][j])
			{
				case -1: putchar('|'); break;
				case 0: putchar(' '); break;
				case 1: putchar('0'); break;
				default: break;
			}
		}
		putchar('\n');
	}
}
// *********************************************
void sleep(unsigned int mill)
{
	clock_t start = clock();
	while(clock() - start < mill) { }
}
// *********************************************


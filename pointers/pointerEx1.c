#include <stdio.h>

int main()
{
	int var, *bar;
	
	var = 230;
	
	bar = &var;
	
	printf("memory addr of var is:%p\nmemory addr of bar is:%p\n",bar,&bar);
	
	//optimized version to print mem addr of var without bar pointer
	printf("\n\noptimized version memory addr of var:%p\n",&var);
	
	//change value of var via bar
	*bar = 560;
	
	printf("var is:%d\n",var);
	
	return 0;
	
}

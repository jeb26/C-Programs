#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <errno.h>

int main()
{
	/**Simple C Program which illustrates the various ways of sending output to the console**/
	
	printf("making system calls.....\n\nclearing screen......\ndone....");
	system("clear");
	
	//Example of using putchar()
	putchar('j');
	putchar('u');
	putchar('n');
	putchar('a');
	putchar('\n');
	putchar('\n');

	//Example of using puts()
	puts("juna\n");

	//Example of using printf()
	printf("name is: juna\n");

	return 0;
}

//including the standard input and output functions
#include <stdio.h>
//provides the c preprocessor macro assert() used to verfiy assumptions made by the program
#include <assert.h>
//provides the ability to define several general operation functions and macros specifically structs
#include <stdlib.h>
//provides many useful functions for string manipulation specifically in this case the string duplicate function strdup()
#include <string.h>

//declare a struct or datatype that will hold various different types of elements
struct Person {
	char *name; //string for the name of a person
	int age; //integer for the age of a person
	int height; //integer for the height of a person
	int weight; //integer for the weight of a person
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
	//creating a pointer to some memory. the size of the memory is allocated to equal the size of the person struct
	struct Person *who = malloc(sizeof(struct Person));
	
	//making sure that the pointer to the struct is valid
	assert(who != NULL);

	//setting the name attribute inside the struct to a copy of the string name passed as a parameter to the function
	who->name = strdup(name);
	
	//setting the age attribute inside the struct to a copy of the age passed as a parameter to the function
	who->age = age;

	//setting height of the person to the height passed as a parameter
	who->height = height;

	//setting the wieght of a person to the weight passed as a parameter
	who->weight = weight;

	//returning the actual person and its associated information
	return who;
}

//fuction defined to clen or release the memory associated with a person struct
void Person_destroy(struct Person *who)
{
	//making sure the pointer to the person is valid
	assert(who != NULL);

	//releases the memory used to store the person's name
	free(who->name);

	//releases the memory used to store the person's attributes
	free(who);
}

void Person_print(struct Person *who)
{
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[])
{
	//make two people
	struct Person *joe = Person_create(
			"Joe Alex", 32, 64, 140);
	
	struct Person *frank = Person_create(
			"Frank Blank", 20, 72, 180);

	//print them out and where they are in memory
	printf("Joe is at memory location %p:\n", joe);
	Person_print(joe);

	printf("Frank is at memory location %p:\n", frank);
	Person_print(frank);

	//make everyone age 20 years and print them again
	joe->age += 20;
	joe->height -= 2;
	joe->weight += 40;
	Person_print(joe);

	frank->age += 20;
	frank->weight += 20;
	Person_print(frank);

	//destroy them both so we clean up
	Person_destroy(joe);
	Person_destroy(frank);

	return 0;
}

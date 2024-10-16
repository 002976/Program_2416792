#include <stdio.h>						//set preprocessor
#include <stdlib.h>

/*
void square (int a)						// square function
{
	a = a*a;							//calculates sqaure but does not have any return
}

int main(int argc, char *argv[]) {
	int a = 2;							//set data type and information
	square(a);							//does the calculation, but nothing is saved 
	printf("a=%i\n",a);					//result of the input
	
	return 0;
}
*/

int square (int a)						//sqaure function
{
	return (a*a);						//returns the sqaure value of input
}

int main()								//main function
{
	int a=2;							//set data type and information
	a = square(a);						//does sqaure calcultion
	printf("a=%i\n",a);					//prints result
}

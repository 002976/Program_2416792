#include <stdio.h>					//set preprocessor
#include <stdlib.h>
/*
int main (void)
{
	int i;
	
	for (i=0;i<10;i++)				//print 10 stars
	printf("*");
	for (i=0;i<10;i++)				//print 10 stars
	printf("*");
	for (i=0;i<10;i++)				//print 10 stars
	printf("*");
}
*/


void print_star()					//printing 10 stars function
{
	int i;
	
	for(i=0;i<10;i++)
	printf("*");
}

int main(int argc, char *argv[]) {	//main function 
	
	print_star();					//using function to print stars
	print_star();
	print_star();
	
	return 0;
}



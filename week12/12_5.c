#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char*pc;
	int*pi;
	double*pd;
	
	pc = (char*)10000;
	pi = (int*)10000;
	pd = (double*)10000;
	
	printf("before : pc = %d, pi = %d, pd = %d\n", pc,pi,pd);
	
	pc++; //1byte
	pi++; //4byte
	pd++; //8byte
	
	printf("after : pc = %d, pi = %d, pd = %d\n", pc,pi,pd);
		
	return 0;
}

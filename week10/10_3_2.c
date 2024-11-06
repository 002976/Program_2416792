#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(int argc, char *argv[]) {
	int i;
	int a[SIZE] = {1,2,3,4,5};
	int b[SIZE] = {1,2,3,7,10};
	
	for (i=0; i<SIZE; i++)
	{
		if (a[i] != b[i])
		printf("a[%d] and b[%d] is different.\n", i,i);
	}
	
	return 0;
}

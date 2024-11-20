#include <stdio.h>
#include <stdlib.h>
/*
void swap(int x, int y){
	int temp;
	temp = x;
	x=y;
	y=temp;
}
*/

void swap(int *x,int *y){
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(int argc, char *argv[]) {
	int a = 3;
	int b = 5;
	swap(&a,&b);
	printf("a : %i, b : %i", a,b);
	return 0;
}

#include <stdio.h>														//set preprocessor
#include <stdlib.h>

int combination(int, int);												//function prototype
int factorial(int);
int get_integer(void);

int main(int argc, char *argv[]) {
	int n,r;															//set data
	
	n = get_integer();													//use funciton to receive data information
	r = get_integer();
	
	printf("%i", combination(n,r) );									//print result
	
	return 0;
}

int combination(int n, int r){											//combination calculation function
	return (factorial(n) / factorial(n-r) / factorial(r) );
	
}

int factorial(int x){													//factorial calculation function
	int i,n=1;
	
	for (i=1; i<x+1;i++)
	n *= i;
	
	return n;
}

int get_integer(void){													//get intger fucntion
	int i;
	
	printf("Enter the value: ");
	scanf("%i",&i);
	
	return i;
}



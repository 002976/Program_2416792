#include <stdio.h>							//set preprocessor
#include <stdlib.h>

int sumTwo(int, int);						//function prototype
int square (int);
int get_max(int, int);

int main(int argc, char *argv[]) {			//main function
	int a,b;								//set data type
	
	printf("Enter the integers: ");			//receive data information
	scanf("%i%i", &a,&b);
	
	printf("Result - Sum: %i, Square: %i, Max: %i", sumTwo(a,b), square(a), get_max(a,b));
											//print result
	return 0;
}

int sumTwo(int a, int b){					//sunTwo function
	return (a+b);
}

int square(int n){							//squre function
	return (n*n);
}

int get_max(int x, int y){					//get max function
	if (y>x)
	x = y;
	
	return x;
}

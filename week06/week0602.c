#include <stdio.h>						//set preprocessor
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x;								//set data type
	
	printf("Enter an integer: ");		//receive data information
	scanf("%i",&x);
	
	if (x<0)							//If the number is negative
	x = -x;								//take the negative of the negavtive. If not, don't do anything
	
	printf("%i",x);						//print result
	
	return 0;
}

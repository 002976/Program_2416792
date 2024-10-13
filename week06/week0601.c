#include <stdio.h>							//set preprocessor
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a;									//set data type
					
	printf("Enter an integer: ");			//receive data information
	scanf("%i",&a);
	
	if (a==0)								//if number is 0
	printf("This is 0.");
	else if (a>0)							//if number is positive
	printf("This is a positive number.");
	else									//if number is negative
	printf("This is a negative number");	
	
	return 0;								//end funciton
}

#include <stdio.h>						//set preprocessor
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int f, s;							//set data type for integers
	char c;								//set data type for operator
	
	printf("Enter the calculation: ");	//receive calculation
	scanf("%i%c%i", &f,&c,&s);
	
	switch (c)
	{
		case '+':						//addition
			printf("= %i", f+s);
			break;
		case '-':						//subtraction
			printf("= %i", f-s);
			break;
		case '*':						//multiplication
			printf("= %i", f*s);
			break;
		case '/':						//finding quotient
			printf("= %i", f/s);
			break;
	}
	
	return 0;							//end function
}

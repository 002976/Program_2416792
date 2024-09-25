#include <stdio.h>												//set preprocesser
	
int main(void) {
	int input_int;												//set data type
	float input_float;
	
	printf("enter an intger : ");								//input_int
	scanf("%d", &input_int);
	
	printf("enter a float : ");									//input_float
	scanf("%f", &input_float);
	
	printf("intger : %d, float : %f", input_int, input_float);	//print final page
	
	return 0;													//end function
}

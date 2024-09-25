#include <stdio.h>										//set preprocesser

int main(void) {
	int input_n;										//set data type
	int input_d;
	float float_n;
	float float_d;
	float ans;

	printf("enter two intgers: ");						//receive data
	scanf("%d, %d", &input_n, &input_d);

	float_n = input_n * 1.00;							//calculations for algorithm
	float_d = input_d * 1.00;
	ans = float_n/float_d;
	
	printf("%f / %f = %f", float_n, float_d, ans);		//print final page
	
	return 0;											//end function
}

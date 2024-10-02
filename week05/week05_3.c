#include <stdio.h>									//set preprocessor
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int time;										//set data type
	
	printf("Input the second : ");					//receive data information
	scanf("%i", &time);
	
	printf("The time is %i : %i", time/60, time%60);//print final result
	
	return 0;										//end function
}

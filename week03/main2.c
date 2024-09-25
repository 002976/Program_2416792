#include <stdio.h>							//set preprocesser

int main(void) {
	char c;									//set data type
	int i;
	
	printf("input a number :");				//update c data
	scanf("%c", &c);	
	
	i = c -'0';								//save integer data to i
	printf("The input number is %i\n", i);	//print final page
	
	return 0;
}

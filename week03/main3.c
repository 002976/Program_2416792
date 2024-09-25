#include <stdio.h>														//set preprocesser

int main(void) {
	char c1;															//set data type for input character
	int i1;
	
	char c2;															//set data type for next character
	int i2;
	
	printf("enter a character : ");										//receive data
	scanf("%c", &c1);
	
	i1 = c1 - '0';														//data processing for next character
	i2 = i1 + 1;
	c2 = i2 + '0';
	
	printf("the next character of %c (%d) is %c (%d)", c1, i1, c2, i2);	//print final page
	
	return 0;
}

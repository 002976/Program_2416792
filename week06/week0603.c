#include <stdio.h>					//set preprocessor
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num=0;						//set data type
	char ch;
	
	printf("Input a string: ");		//receive string information
	scanf("%c",&ch);
	
	while( (ch=getchar()) != '\n')	//divide string into individual character
	{
		if (ch>47&&ch<58)			//if character is a number
		num += 1;					//add one to the "num"
	}
	
	printf("%i",num);				//print result
	
	return 0;						//end function
}

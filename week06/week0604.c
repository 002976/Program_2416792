#include <stdio.h>					//set preprocessor
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, i, sum=0;				//set data type
	
	printf("Enter a number: ");		//receive data
	scanf("%i", &n);
	
	for(i=1; i<n+1 ;i++)			//add all natural numbers that are not greater than the given number
	sum += i;
	
	printf("%i", sum);				//print result
	
	return 0;						//end function
}

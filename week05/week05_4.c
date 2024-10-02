#include <stdio.h>											//set preprocessor
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int year, ans;											//set data type
	
	printf("Input the year : ");							//receive information for data
	scanf("%i", &year);
	
	ans = (year%4==0&&year%100!=0)||(year%400==0);			//determine if received year is a leap year
	
	printf("Is the year %i a leap year? %i", year, ans);	//print result
	
	return 0;												//end function
}

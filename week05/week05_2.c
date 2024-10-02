#include <stdio.h>						//set preprocessor
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x,y;							//set data type
	
	printf("Input two integers :");		//receive input for data
	scanf("%i %i", &x, &y);
	
	printf("+ result is %i\n- result is %i\n* result is %i\n/ result is %i\n%% result is %i", x+y, x-y, x*y,x/y,x%y);
										//print result
	return 0;							//end function
}

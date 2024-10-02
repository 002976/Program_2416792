#include <stdio.h>					//set preprocessor
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x,y,z,m;					//set data type
	int a,b,c;
	
	x=2;							//set data information
	z=1;
	a=3;
	b=4;
	c=5;
	
	y = a*x*x+b*x+c;				//preform calculation
	m = (x+y+z)/3;
	
	printf("y=%d, m=%d", y,m);		//print result
	
	return 0;						//end function
}


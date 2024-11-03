#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
	for(i=0;i<5;i++)
	{
		int temp = 1;					//every time the for block is
		printf("temp = %d\n", temp);	//processed, temp meomory is
		temp++;							//created, saved with the value 1, 
	}									//and deleted again.
	return 0;
}

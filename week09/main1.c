#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int flag =1;
	
	int y;				//rewrite code to prevent y memory from
	while(flag!=0)		//being deleted after while block
	{
		y=3;
		flag = 0;
	}
	y=4;
	
	return 0;
}

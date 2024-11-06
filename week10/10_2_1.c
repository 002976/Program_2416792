#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(int argc, char *argv[]) {
	
	int i;
	int grade[SIZE];
	printf("Enter scores of 5 students.\n");
	
	for(i=0;i<SIZE;i++)
	scanf("%d", &grade[i]);
	
	for(i=0;i<SIZE;i++)
	printf("grade[%d] = %d\n", i, grade[i]);
	
	return 0;
}

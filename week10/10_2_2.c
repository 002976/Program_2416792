#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(int argc, char *argv[]) {
	int i, average;
	int sum;
	int grade[SIZE];
	
	sum=0;
	for(i=0;i<SIZE;i++)
	{
		printf("Enter student score : ");
		scanf("%i", &grade[i]);
		sum += grade[i];
	}
	
	average = sum / SIZE;
	printf("Average score : %d\n", average);
	return 0;
}

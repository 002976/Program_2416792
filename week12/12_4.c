#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	int grade[5];
	int sum = 0;
	
	for(i=0;i<5;i++)
	{
		printf("Input value - grade[%i] = ", i);
		scanf("%d", &grade[i]);
	}
	
	for(i=0;i<5;i++)	
	{
		int*ptr = &grade;
		printf("grade[%i] = %i\n", i, *(ptr+i));
		sum += *(ptr+i);
	}
	printf("average : %i", sum/5);

	return 0;
}

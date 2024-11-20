#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	FILE*fp;
	char input[20];
	int i;
	
	fp = fopen("sample.txt","w");
	
	for (i=0; i<3; i++)
	{
		printf("input a word : ");
		scanf("%s", input);
		fprintf(fp,"%s\n", input);
	}
	
	fclose(fp);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE*fp;
	fp = fopen("sample.txt", "r");
	char c[20];
	
	if (fp == NULL)
	printf("Cannot read file\n");
	
	while((fgets(c,30,fp))!= NULL){
		printf("%s", c);	
	}
	
	fclose(fp);
	
	return 0;
}
